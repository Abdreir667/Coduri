#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,a,b,c,c1,c2,b1,ca;
    cout<<"n=";cin>>n;
    for(a=4;a<n;a++)
    {
        b=a*a;
        c=a*a*a;
        b1=b;
        ca=c;
        do
        {
            if(c1=c2)
            {cout<<sqrt(b1)<<endl;}
        c1=b%10;
        b=(b-c1)/10;
        if(c1=c2)
            {cout<<sqrt(b1)<<endl;}
        c2=c%10;
        c=(c-c2)/10;
        if(c1=c2)
            {cout<<sqrt(b1)<<endl;}
        cout<<b<<" "<<c<<endl;
        cout<<c1<<" "<<c2<<endl;

        }
        while(b%10!=0 && c%10!=0);



    }


    return 0;
}
