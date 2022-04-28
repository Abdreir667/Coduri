#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,delta,x1,x2;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    delta=b*b-4*a*c;
    if(delta>0)

        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);



    if(delta=0)

        x1=x2=-b/(2*a);


    if(delta<0)

        cout<<"Nu exista x1 si x2 in multimea numerelor reale";

    cout<<"delta="<<delta<<" ";
    cout<<"x1="<<x1<<" ";
    cout<<"x2="<<x2;
    return 0;
}
