#include <iostream>

using namespace std;

int main()
{
    int a,k,n,s=0,r,nri=0;
    cout<<"k=";cin>>k;
    cout<<"a=";cin>>a;
    while(a!=0)
    {   s=0;
        while(a>0)
        {
            r=a%10;
            s=s+r;
            a=a/10;
        }
        if(s==k)
        {
           nri=nri+1;
        }
        else
        {
            nri=nri;
        }
        cout<<"a=";cin>>a;

    }
        cout<<"Numarul cifrelor cu suma cifrelor "<<k<<" este egal cu:"<<nri;
        return 0;
}
