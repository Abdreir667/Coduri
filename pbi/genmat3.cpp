#include <iostream>

using namespace std;

long long mat[21][21];
int linii,coloane;
int k=1;

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            mat[i][j]=k*k;
            k+=2;
        }
    for(int i=1;i<=linii;i++,cout<<"\n")
        for(int j=1;j<=coloane;j++)
            cout<<mat[i][j]<<" ";
}