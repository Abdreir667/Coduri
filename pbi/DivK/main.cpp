#include <iostream>

using namespace std;

int main()
{
    int n,a,k,nrd;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        nrd=0;
        for(int j=2;j<=a/2;j++)
            if(a%j==0)
                nrd++;
        cout<<nrd<<endl;
        if(nrd>=k)
            cout<<a<<endl;

    }
    return 0;
}
