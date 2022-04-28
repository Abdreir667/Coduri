#include <iostream>

using namespace std;

int main()
{
    int t,n,k,i,k1=0;
    cout<<"t=";cin>>t;
    while(k1!=t)
    {
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    for( i=n;i<=n+k;i++)
    {
       if(i%k==0)
        cout<<i<<endl;
    }
    k1++;
    }
    return 0;
}
