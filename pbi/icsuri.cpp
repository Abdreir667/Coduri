#include <iostream>

using namespace std;

int dimensiune,nr_x,linie,coloana,lungime,x_amp=0;
bool mat[1001][1001]={0};

void trasare(int linie,int coloana,int lungime,int dimensiune)
{
    mat[linie][coloana]=1;
    int linie_aux=linie+1,coloana_aux=coloana-1;
    int k=1;
    while(linie_aux<=dimensiune && coloana_aux>=1 && k<=lungime)
    {
        k++;
        mat[linie_aux][coloana_aux]=1;
        linie_aux++;
        coloana_aux--;
    }
    linie_aux=linie+1,coloana_aux=coloana+1;
    k=1;
    while(linie_aux<=dimensiune && coloana_aux<=dimensiune && k<=lungime)
    {
        k++;
        mat[linie_aux][coloana_aux]=1;
        linie_aux++;
        coloana_aux++;
    }
    linie_aux=linie-1,coloana_aux=coloana+1;
    k=1;
    while(linie_aux>=1 && coloana_aux<=dimensiune && k<=lungime)
    {
        k++;
        mat[linie_aux][coloana_aux]=1;
        linie_aux--;
        coloana_aux++;
    }
    linie_aux=linie-1,coloana_aux=coloana-1;
    k=1;
    while(linie_aux>=1 && coloana_aux>=1 && k<=lungime)
    {
        k++;
        mat[linie_aux][coloana_aux]=1;
        linie_aux--;
        coloana_aux--;
    }

}

int main(void)
{
    cin>>dimensiune>>nr_x;
    for(int i=1;i<=nr_x;i++)
    {
        cin>>linie>>coloana>>lungime;
        trasare(linie,coloana,lungime,dimensiune);
    }
    for(int i=1;i<=dimensiune;i++)
        for(int j=1;j<=dimensiune;j++)
            if(mat[i][j]==0)
                x_amp++;
    cout<<x_amp;
}