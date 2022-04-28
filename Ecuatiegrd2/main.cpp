#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,x,x1,x2,d;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    cout<<"ecuatia este de forma="<<a<<"*x*x+"<<b<<"*x+"<<c<<"\n";
    d=b*b-(4*a*c);
    cout<<"Delta="<<d<<"\n";
    if(d<0)
    {
        cout<<"Nu exista solutii reale"<<"\n";
    }
        else
        if(d=0)
        {
        x1=x2=(-b)/(2*a);
        cout<<"solutiile ecuatiei sunt="<<x1<<" "<<x2;
        }
        else
            if(d>0)
            {
            x1=(-b+(sqrt(d)))/(2*a);
            x2=(-b-(sqrt(d)))/(2*a);
            cout<<"solutiile ecuatiei sunt="<<x1<<" "<<x2;

            }





    return 0;
}
