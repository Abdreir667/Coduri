#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("sortare_divizori.in");
ofstream cout("sortare_divizori.out");

struct pereche{
    int numar;
    int numardiv;
}numar[1001];

int numar_divizori(int n)
{
    int nrd=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                nrd++;
            else nrd+=2;
        }
    }
    return nrd;
}

void quicksort(pereche v[],int st,int dr)
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        swap(v[m],v[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(v[i].numardiv<v[j].numardiv)
            {
                swap(v[i],v[j]);
                d=1-d;
            }
            else if(v[i].numardiv==v[j].numardiv && v[i].numar>v[j].numar)
            {
                swap(v[i],v[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(v,st,i-1);
        quicksort(v,i+1,dr);
    }
}

int n;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>numar[i].numar;
        numar[i].numardiv=numar_divizori(numar[i].numar);
    }
    quicksort(numar,1,n);
    for(int i=1;i<=n;i++)
        cout<<numar[i].numar<<" ";
}