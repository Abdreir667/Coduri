#include <iostream>

using namespace std;

int main()
{
    int a,b,c,min,max;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    if(a<0)
        a=-a;
    else
        a=a;
    if(b<0)
        b=-b;
    else
        b=b;
    if(c<0)
        c=-c;
    else
        c=c;
    min=a;
    if(b<min)
    min=b;
    if(c<min)
    min=c;
    max=b;
    if(a>max)
    max=a;
    if(c>max)
    max=c;
    cout<<"min="<<min;
    cout<<"max="<<max;
    return 0;
}
