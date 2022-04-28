#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    cout<<"n=";cin>>n;
    a=0;
    b=1;
    c=b*2;
    while(a<=n)
    {
        a=b;
        b=c;
        c=2*b;
        if(a==n)
        {
            cout<<a<<endl;
            return 0;
        }
        if(b>n)
        {
            cout<<a<<" ";
            n=n-a;
            a=0;
            b=1;
            c=b*2;
        }

    }


    
}