#include <stdio.h>
#include <algorithm>

using namespace std;

int numar_divizori[1000000]={0},n,c;
int numere[50002],p;

FILE *in= fopen("divizori4.in", "r");
FILE *out= fopen("divizori4.out", "w");

void nr_div()
{
    for(int i=1;i<=10000000;i++)
        for(int j=1;j*i<=10000000;j++)
            numar_divizori[i*j]++;
}

int main()
{
    nr_div();
    fscanf(in,"%d %d",&n,&c);
    for(int i=1;i<=n;i++)
        fscanf(in,"%d",&numere[i]);
    fscanf(in,"%d",&p);
    switch (c)
    {
        case 1:
        {
            fprintf(out,"%d ",numar_divizori[numere[p]]);
            break;
        }
        case 2:
        {
            int numar_referinta=numar_divizori[numere[p]];
            sort(numere+1,numere+n+1,greater<int>());
            for(int i=1;i<=n;i++)
                if(numar_divizori[numere[i]]==numar_referinta)
                    fprintf(out,"%d ",numere[i]);
            break;
        }
    }
}