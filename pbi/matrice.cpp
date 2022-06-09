#include <iostream>

using namespace std;

int mat[101][101],linii,coloane;

void stergere_coloana(int n)
{
    for(int j=n;j<coloane;j++)
        for(int i=1;i<=linii;i++)
            mat[i][j]=mat[i][j+1];
    coloane--;
}

void stergere_linie(int n)
{
    for(int i=n;i<linii;i++)
        for(int j=1;j<=coloane;j++)
            mat[i][j]=mat[i+1][j];
    linii--;
}

void adaugare_linie(int n)
{
    for(int i=linii;i>=n;i--)
        for(int j=1;j<=coloane;j++)
            mat[i+1][j]=mat[i][j];
    linii++;
}

void adaugare_coloana(int n)
{
    for(int j=coloane;j>=n;j--)
        for(int i=1;i<=linii;i++)
            mat[i][j+1]=mat[i][j];
    coloane++;
}

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
            cin>>mat[i][j];
    adaugare_coloana(2);
    cout<<endl;
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=coloane;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
        
}