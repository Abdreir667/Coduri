#include <stdio.h>

using namespace std;

int n,nr,maxi=0,mini=2147483647,poz_min=0,poz_max=0;
long long s=0;

int main(void)
{
    FILE *in=fopen("memory003.in","r");
    FILE *out=fopen("memory003.out","w");
    fscanf(in,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        fscanf(in,"%d",&nr);
        if(nr<mini)
        {
            mini=nr;
            if(poz_min<poz_max)
                s=nr;
            poz_min=i;
        }
        if(nr>maxi)
        {
            maxi=nr;
            if(poz_max<poz_min)
                s=nr;
            poz_max=i;
        }
        if(nr<maxi && nr>mini && poz_min<poz_max)
            s+=nr;
        else if(nr>mini && nr<maxi && poz_min<poz_max)
            s+=nr;
    }
    fprintf(out,"%d",s);
}