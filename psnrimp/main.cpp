#include <iostream>

using namespace std;

int main()
{
    int n,s=0,p=1,max;
    cout<<"n=";cin>>n;
    max=2*n-1;
    for(int i=1;i<=max;i=i+2)
    {
        cout<<"i="<<i<<endl;
        s=s+i;
        p=p*i;
    }
    cout<<s<<endl;
    cout<<p<<endl;

    return 0;
}
