#include <iostream>

using namespace std;

int main()
{
    int n,arr[101],maxi,nrp=0,o=0,carr[101]={0},barr[101];
    bool cond=false;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        maxi=max(arr[i],maxi);
    }
    for(int i=1;i<=n;i++)
    {
        cond=false;
        for(int j=1;j<=o;j++) 
            if(arr[i]==arr[j])
            {
                cond=true;
                carr[j]++;
                break;
            }
        if(cond==false)
            barr[++o]=arr[i];
    }
    for(int i=1;i<=o;i++)
        nrp=nrp+(carr[i]+1)/2;
    cout<<nrp;
}