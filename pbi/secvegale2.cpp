#include <iostream>

using namespace std;

long long arr[100005],n,nr,nrp=0,l=1;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    arr[n+1]=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            l++;
        else 
        {
            nrp+=l*(l+1)/2;
            l=1;
        }
    }
    nrp+=l*(l+1)/2;
    cout<<nrp<<endl;
}