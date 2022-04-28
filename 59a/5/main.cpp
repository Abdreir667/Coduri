#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,a,b,c,c1,c2,b1;
    cout<<"n=";cin>>n;

        for(a=4;a<n;a++)
        {

        b=a*a;
        b1=b;
        c=a*a*a;
        if(c1==c2)
        {cout<<sqrt(b1)<<endl;}
        c1=b%10;
        b=(b-c1)/10;
        if(c1==c2)
            {cout<<sqrt(b1)<<endl;}
        c2=c%10;
        c=(c-c2)/10;
        if(c1==c2)
        {cout<<sqrt(b1)<<endl;}
        }



    return 0;
}
