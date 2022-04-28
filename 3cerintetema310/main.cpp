#include <iostream>

using namespace std;

int main()
{
    int a,c1,c2,c3,max,min,aux,nrmax3,nrmax2,inv;
    cout<<"a=";cin>>a;
    c1=a/100;//prima cifra
    c2=a%10;//a treia cifra
    c3=(a-(c1*100+c2))/10;//a doua cifra
    max=c1;
    if(c2>max)
        max=c2;
    if(c3>max)
        max=c3;
    min=c2;
    if(c1<min)
        min=c1;
    if(c3<min)
        min=c3;
    cout<<"max="<<max<<"\n";
    cout<<"min="<<min<<"\n";
    if((max==c1 && min==c2)||(max==c2 && min==c1))
        aux=c3;
    if((max==c2 && min==c3)||(max==c3 && min==c2))
        aux=c1;
    if((max==c1 && min==c3)||(max==c3 && min==c1))
        aux=c2;
    cout<<"aux="<<aux<<"\n";
    nrmax3=100*max+10*aux+min;
    cout<<"nrmax3="<<nrmax3<<"\n";
    if(c1>c3 && c3>c2)
        nrmax2=c1*10+c3;
    if(c2>c3 && c3>c1)
        nrmax2=c3*10+c2;
    if(c3>c2 && c2>c1)
        nrmax2=c3*10+c2;
    if(c1>c2 && c2>c3)
        nrmax2=c1*10+c2;
    if(c2>c1 && c1>c3)
        nrmax2=c1*10+c2;
    if(c3>c1 && c1>c2)
        {nrmax2=c1*10+c3;}
    inv=c2*100+c3*10+c1;
    cout<<"inversul="<<inv<<"\n";
    if(inv==a)
        {cout<<"Numarul este un palindrom"<<"\n";}
        else
    if(inv!=a)
        {cout<<"Numarul nu este un palindrom"<<"\n";}
    cout<<"nrmax2="<<nrmax2;


    return 0;
}
