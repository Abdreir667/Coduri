#include <stdio.h>
#include <vector>

using namespace std;

FILE *in= fopen("easyquery.in", "r");
FILE *out= fopen("easyquery.out", "w");

long long n,m,nr,caz,st,dr,x;
vector<long long> produse;
vector<long long> diff_arr;

int main(void)
{
    fscanf(in,"%d",&n);
    produse.resize(n+1,0);
    diff_arr.resize(n+2,0);
    for(int i=1;i<=n;i++)
        fscanf(in,"%d",&produse[i]);
    fscanf(in,"%d",&m);
    for(int i=1;i<=m;i++)
    {
        fscanf(in,"%d %d %d %d",&caz,&st,&dr,&x);
        if(caz==2)
            x*=-1;
        diff_arr[st]+=x;
        diff_arr[dr+1]-=x;
    }
    for(int i=1;i<=n;i++)
    {
        diff_arr[i]+=diff_arr[i-1];
        produse[i]+=diff_arr[i];
        fprintf(out,"%d ",produse[i]);
    }
}