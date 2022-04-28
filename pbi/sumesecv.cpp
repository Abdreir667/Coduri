#include <iostream>

using namespace std;

int arr[100001],n,cap1,cap2,m;
long long s[100001],mini=-9223372036854775807;

int main(void)
{
    cin>>n;
    s[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        s[i]=s[i-1]+arr[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>cap1>>cap2;
        if(cap1>cap2)
            swap(cap1,cap2);
        long long sum=s[cap2]-s[cap1-1];
        if(sum>mini)
            mini=sum;
    }
    cout<<mini<<endl;
}
