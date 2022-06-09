#include <iostream>

using namespace std;

int poz=0,a[1000001],n,b[1000001],x,w,y,z,nre=0;

void submultimi(int n, int k)
{
    for(int i=1;i<=k;i++)
        b[i]=i;
    do
    {
        int s=0;
        for(int i=1;i<=k;i++)
            s+=a[b[i]];
        if(s%5==0)
            nre++;
        poz=k;
        while(b[poz]>=n-k+poz && poz>0)
            poz--;
        b[poz]++;
        for(int i=poz+1;i<=k;i++)
            b[i]=b[i-1]+1;
    }while(poz>0);
    cout<<nre<<endl;
}

int main(void)
{
    cin>>n>>w>>x>>y>>z;
    a[1]=w;
    for(int i=2;i<=n;i++)
        a[i]=(x*a[i-1]+y)%z;
    submultimi(n,3);
}