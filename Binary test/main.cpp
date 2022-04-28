#include <iostream>

using namespace std;

int main()
{
    int c1,c2,c3,c4,c5,c6,c7,c8,n,aux1,aux2,aux3,aux4,aux5,aux6,nbin;
    cout<<"n=";cin>>n;
    c1=n%10;
    c2=n/100;
    cout<<"c1="<<c1<<" ";//ultima
    cout<<"c2="<<c2<<" ";//var auxiliara 2
    aux1=c1+c2*100;
    cout<<"aux1="<<aux1<<"  ";
    c3=(n-aux1)/10;
    cout<<"c3="<<c3;//a douua
    c4=c2%10;
    cout<<" "<<"c4="<<c4;//a treia
    aux2=(c2-c4)/10;
    cout<<" "<<"aux2="<<aux2;
    c5=aux2%10;
    cout<<" "<<"c5="<<c5;//a patra
    aux3=(aux2-c5)/10;
    cout<<" "<<"aux3="<<aux3;
    c6=aux3%10;
    cout<<" "<<"c6="<<c6;//a cincea
    aux4=(aux3-c6)/10;
    cout<<" "<<"aux4="<<aux4;
    c7=aux4%10;
    cout<<" "<<"c7="<<c7;//a saea litera]
    aux5=(aux4-c7)/10;
    cout<<" "<<"aux5="<<aux5;
    c8=aux5%10;
    cout<<" "<<"c8="<<c8;//a saptea litera
    aux6=(aux5-c8)/10;
    cout<<" "<<"aux6="<<aux6;//a opta litera
    nbin=c1+c3*2+c4*4+c5*8+c6*16+c7*32+c8*64+aux6*128;
    cout<<"  "<<"nbin="<<nbin;










    return 0;
}
