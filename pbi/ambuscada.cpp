#include <stdio.h>
#include <vector>
#include <ios>

using namespace std;

FILE *in= fopen("ambuscada.in", "r");
FILE *out= fopen("ambuscada.out", "w");

vector<int> soldati;
vector<int> ambuscada;
long long n,m,v,s,d,x,nrs=0;

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    fscanf(in, "%d %d %d",&n,&m,&v);
    soldati.resize(n+3,v);
    ambuscada.resize(n+4,0);
    for(int i=1;i<=m;i++)
    {
        fscanf(in, "%d %d %d",&s,&d,&x);
        ambuscada[s]+=x;
        ambuscada[d+1]-=x;
    }
    for(int i=1;i<=n;i++)
    {
        ambuscada[i]+=ambuscada[i-1];
        soldati[i]-=ambuscada[i];
        if(soldati[i]>0)
            nrs++;
    }
    fprintf(out,"%d",nrs);
}