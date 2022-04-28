#include <iostream>

using namespace std;

int main()
{
    int m,n,a1,a2,a3;
    cout<<"m=";cin>>m;
    cout<<"n=";cin>>n;
    a1=m;
    a2=n;
    while(a1!=0)
    {
        a3=a1-a2;
        a1=a2;
        a2=a3;
    }
    if(a3==1 && a2==1)
    cout<<"Numerele  reprezinta termeni consecutivi din sirul lui Fibonacci";
    else cout<<"Numerele nu sunt termeni consecutivi din sirul lui Fibonacci";
}