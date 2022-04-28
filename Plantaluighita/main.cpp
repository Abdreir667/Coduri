#include <iostream>

using namespace std;

int main()
{
    int h,a,b,h2,d,ct,dt;
    cout<<"h=";cin>>h;
    cout<<"d=";cin>>d;
    a=3;
    b=2;
    if(d%2==0)
    {
        ct=(d/2)*a;
        dt=(d/2)*b;
        h2=h+ct-dt;
    }
    else
    if(d%2!=0)
    {
        ct=(d/2)*a;
        dt=(d/2+1)*b;
        h2=h+ct-dt;

    }

    cout<<"Inaltimea dupa "<<d<<" zile="<<h2;


    return 0;
}
