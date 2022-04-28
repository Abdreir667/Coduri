#include <iostream>

using namespace std;

int main()
{
    int a,b,c,max,min,aux;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    cout<<"max="<<max<<"\n";
    min=b;
    if(a<min)
        min=a;
    if(c<min)
        min=c;
    cout<<"min="<<min<<"\n";
    if((max==a && min==b) || (max==b && min==a))
    {aux=c;}
    if((max==b && min==c) || (max==c && min==b))
    {aux=a;}
    if((max==a && min==c) || (max==c && min==a))
    {aux=b;}
    cout<<"aux="<<aux<<"\n";
    cout<<"Numerele crescatoare sunt: "<<min<<","<<aux<<","<<max;




    return 0;
}
