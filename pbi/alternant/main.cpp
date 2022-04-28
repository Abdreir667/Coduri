#include <iostream>

using namespace std;

int main()
{
    int a,aux,c1,c2,c3,c4,aux1;
    cout<<"a=";cin>>a;
    aux=a;
    while(aux!=0)
    {
        c1=aux%10;
        c2=(aux/10)%10;
        aux1=aux/100;
        if(c1%2==0 && c2%2!=0)
        {
           c3=aux1%10;
           c4=(aux1/10)%10;
           if(c3%2!=0 && c4%2==0)
           {
               cout<<"Numarul este alternant";
           }
           else
            cout<<"Numarul nu este alternant";
        }
        else if(c1%2!=0 && c2%2==0)
        {
            c3=aux1%10;
           c4=(aux1/10)%10;
           if(c3%2==0 && c4%10!=0)
           {
               cout<<"Numarul este anlternant";
           }
           else
            cout<<"Numarul nu este alternant";
        }
        else
        {cout<<"Numarul nu este alternant";}
        aux=aux/100;

    }
    return 0;
}
