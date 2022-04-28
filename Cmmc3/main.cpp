#include <iostream>

using namespace std;

int main()
{
    int a,b,c,r1,r2,div1,div2,aux,mul1,a1,b1,c1,mul2;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    a1=a;
    b1=b;
    c1=c;
    while(b!=0)
    {
        r1=a%b;
        a=b;
        b=r1;
    }
        div1=a+b;
        cout<<"div1="<<div1<<"\n";

    mul1=(a1*b1)/div1;
    while(c1!=0)
    {
        r2=mul1%c1;
        mul1=c1;
        c1=r2;
    }
        div2=mul1+c;
        cout<<"mul1="<<mul1<<"\n";
        cout<<"div2="<<div2<<"\n";
    mul2=(mul1*c1)/div2;
        cout<<"Multiplul numerelor "<<a1<<","<<b1<<","<<c<<" este:"<<mul2;


    return 0;
}
