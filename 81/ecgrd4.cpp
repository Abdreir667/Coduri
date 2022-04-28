#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    float delta1,y,x1,x2;
    if(a>0 && b>0)
    delta1=b*b-4*a*c;
    else 
    delta1=b*b+4*a*c;
    cout<<sqrt(delta1)<<endl;
    if(delta1<0)
    {
        cout<<"Ecuatia nu are valori reale"<<endl;
    }
    else 
    {
        if(delta1==0)
        {
            x1=(-b+sqrt(delta1))/2*a;
            x1=x2;
        }
        else if (delta1!=0)
        {
            x1=(-b+sqrt(delta1))/2*a;
            x2=(-b-sqrt(delta1))/2*a;
        }
    }
    float x3,x4;
    x3=sqrt(x1);
    x4=sqrt(x2);
    cout<<x1<<x2<<endl;

}