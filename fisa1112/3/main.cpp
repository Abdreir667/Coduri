#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n,nre=0,x,nrc=0;
    cout<<"x=";cin>>x;
    a=1;
    b=1;
    while(x>=0)
    {
    while(c<x)
    {
        c=a+b;
        b=a;
        a=c;
        if(x==c)
        {
            nrc++;
        }
        if(x==1)
        {
            nrc++;
        }
    }
    cout<<"x=";cin>>x;
    }
    cout<<nrc<<endl;

    return 0;
}
