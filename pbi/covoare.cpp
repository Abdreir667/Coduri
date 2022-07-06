#include <stdio.h>
#include <algorithm>

using namespace std;

int linii,coloane,nr_covoare;

FILE *in= fopen("covoare1.in","r");
FILE *out= fopen("covoare1.out","w");

struct covoare{
    int x,y;
};
covoare p[200001];

int ord(covoare a,covoare b)
{
    if(a.x==b.x)
        return a.y<b.y;
    else return a.x<b.x;
}

int main(void)
{
    fscanf(in, "%d %d %d",&linii,&coloane,&nr_covoare);
    for(int i=1;i<=nr_covoare;i++)
        fscanf(in, "%d %d",&p[i].x,&p[i].y);
    sort(p+1,p+1+nr_covoare,ord);
    for(int i=1;i<=nr_covoare;i++)
        fprintf(out,"%d %d\n",p[i].x,p[i].y);
}