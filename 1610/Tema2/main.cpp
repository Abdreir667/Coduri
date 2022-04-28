#include <iostream>

using namespace std;

int main()
{
    int a,n,nrn=0,s=0,nrp=0,m;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    do
    {
        if(a>0)
        {
        s=s+a;
        nrp=nrp+1;
        }
        if(a<0)
        {nrn=nrn+1;}

        cout<<"a=";cin>>a;

    }
    while(n!=nrn);
    m=s/nrp;
    cout<<"m="<<m;







    return 0;
}
