#include <stdio.h>
#include <bitset>

using namespace std;

FILE *in= fopen("poartas.in", "r");
FILE *out= fopen("poartas.out", "w");

short linie,coloana,lin_trg,col_trg;
int n;

struct{
    short p=0,q=0;
}mat[251][251];

int main(void)
{
    fscanf(in, "%d",n);
    for(int i=1;i<=n;i++)
    {
        fscanf(in,"%d %d %d %d",&linie,&coloana,&lin_trg,&col_trg);
        if(mat[])
            mat[linie][coloana].p=lin_trg;
            mat[linie][coloana].q=col_trg;
    }
}