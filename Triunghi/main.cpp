#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    if (a==b&&b==c)
        cout<<"triunghiul este echilateral";
    if (a==b||b==c||c==a)
        "triunghiul este isoscel";
        end;
    if ( a*a+b*b=c*c || a*a+c*c=b*b || b*b+c*c=a*a )
        cout<<"triunghiul este dreptunghic";
        end;
    if (a==b || b==c || c==a && a*a+b*b=c*c || a*a+c*c=b*b || b*b+c*c=a*a)
        cout<<"triunghiul este dreptunghic isoscel";

    return 0;
}
