#include <iostream>

using namespace std;

int main()
{
    int a,b,n,nrd,k,ok=0,ok1=0,nrd1,l;
    cout<<"n=";cin>>n;
    k=0;
    while(ok==0)
    {
        nrd=0;
        a=n-k;
        for(int j=2;j<=a-1;j++)
        {
            if(a%j==0)
            {
                nrd=nrd+1;
            }
        }
        if(nrd==0)
            {
                cout<<a<<endl;
                ok=1;
            }
            else
            {
                k++;
            }

    }
    l=0;
    while(ok1==0)
    {
        nrd1=0;
        b=n+l;
        for(int i=2;i<=a-1;i++)
        {
            if(b%i==0)
            {
                nrd1=nrd1+1;
            }
        }
        if(nrd1==0)
            {
                cout<<b<<endl;
                ok1=1;
            }
            else
            {
                l++;
            }

    }

    return 0;
}
