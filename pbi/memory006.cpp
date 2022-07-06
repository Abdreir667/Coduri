#include <stdio.h>
#include <cmath>

using namespace std;

FILE *in= fopen("memory006.in", "r");
FILE *out= fopen("memory006.out", "w");

long long n,nr,k=0,nre=0;
long long expo=0,nrs=0;

int log(long long x)
{
    return __builtin_ctzll(x);
}


int main(void)
{
    fscanf(in, "%d %d", &n,&k);
    for(int i=1;i<=n;i++)
    {
        fscanf(in, "%d", &nr);
        if((nr&(nr-1))==0)
        {
            expo+=log(nr);
            if(expo==k)
            {
                nrs++;
            } 
        }
        else expo=0;
    }
    fprintf(out,"%d",nrs);
}