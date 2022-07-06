#include <stdio.h>
#include <bitset>

using namespace std;

bool numere_prime[1000001];
int nr,n,nre=0;
int numar_divizori[1000001];

void ciur(void)
{
    numere_prime[0]=numere_prime[1]=1;
    for(int i=2;i<=1000000;i++)
    {
        if(numere_prime[i]==0)
            for(int j=2;i*j<=1000000;j++)
                numere_prime[i*j]=1;
    }
}

void nr_div()
{
    for(int i=1;i<=1000000;i++)
        for(int j=1;j*i<=1000000;j++)
            numar_divizori[i*j]++;
}

int main(void)
{
    FILE *in=fopen("fantastice.in", "r");
    FILE *out=fopen("fantastice.out", "w");
    fscanf(in,"%d",&n);
    ciur();
    nr_div();
    for(int i=1;i<=n;i++)
    {
        fscanf(in,"%d",&nr);
        if(!numere_prime[numar_divizori[nr]])
            nre++;
    }
    fprintf(out,"%d ",nre);
}