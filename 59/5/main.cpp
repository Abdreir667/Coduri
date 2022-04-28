#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,n,b,c,d,b1,c2,c1;
    cout<<"n=";cin>>n;
    for(a=1;a<n;a++)
    {
    b=a*a;
    c=a*a*a;
    while(b/10!=0 && c/10!=0)
        if(c1=c2)
        {cout<<sqrt(b);}
        c1=b%10;
        b=(b-c1)/10;
        if(c1=c2)
        {cout<<sqrt(b);}
        c2=c%10;
        c=(c-c2)/10;
        if(c1=c2)
            cout<<sqrt(b);
    }







    return 0;
}
