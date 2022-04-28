#include <fstream>

using namespace std;

ifstream cin("clase.in");
ofstream cout("clase.out");

long long nre=0,n,m;
long long carti[100001],nr;

long long binarysearch(long long arr[],long long st,long long dr,long long nr)
{
    if(st>dr)
        return 0;
    long long m=(st+dr)/2;
    if(arr[m]==nr)
    {
        nre++;
        return 0;
    }
    if(arr[m]<nr)
        binarysearch(arr,m+1,dr,nr);
    else binarysearch(arr,st,m-1,nr);
    return nre;
}

int main(void)
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
        cin>>carti[i];
    for(long long i=1;i<=m;i++)
    {
        cin>>nr;
        binarysearch(carti,1,n,nr);
    }
    cout<<nre<<endl;
}
