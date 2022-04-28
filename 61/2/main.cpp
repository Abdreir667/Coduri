#include <iostream>

using namespace std;

int main()
{
    int a,b,c,mc,mcf;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    int aux1,aux2,aux3;
    aux1=a;
    aux2=b;
    aux3=c;
    while(a!=b)
    {
       if(a>b)
        a=a-b;
       else b=b-a;
    }
    mc=aux1*aux2/a;
    while(a!=c)
    {
        if(a>c)
            a=a-c;
        else c=c-a;
    }
    mcf=mc*aux3/c;
    cout<<c<<" "<<mcf;

    return 0;
}
