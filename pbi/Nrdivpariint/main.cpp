#include <iostream>

using namespace std;

int main()
{
    int a,b,nrmax,max,min,nrd,k,i,k1,nrd1;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    nrmax=1;
    k=0;
    for(i=a;i<=b;i++)
    {
        nrd=0;
        for(int j=2;j<=i/2;j=j+2)
        if(i%j==0)
            nrd++;
        while(k!=1)
        {
        if(nrd==1)
        cout<<i<<endl;
        k++;
        }
        if(nrd>nrmax)
            nrmax=nrd;
        else nrmax=nrmax;
    }
    cout<<nrmax<<endl;
    k1=0;
    for(int k=b;k>=a;k--)
    {
       nrd1=0;
        for(int l=2;l<=k/2;l=l+2)
        if(k%l==0)
            nrd1++;
            while(k1!=1)
            {
                if(nrd1==nrmax)
                {
                    cout<<k<<endl;
                    k1++;
                }
            }
    }
    return 0;
}
