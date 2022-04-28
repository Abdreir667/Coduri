#include <iostream>

using namespace std;

int main()
{
    int c1,c2,c3,c4,c5,c6,c7,c8,n,aux1,aux2,aux3,aux4,aux5,aux6,nbin;
    cout<<"n=";cin>>n;
    c1=n%10;
    c2=n/100;
    aux1=c1+c2*100;
    c3=(n-aux1)/10;
    c4=c2%10;
    aux2=(c2-c4)/10;
    c5=aux2%10;
    aux3=(aux2-c5)/10;
    c6=aux3%10;
    aux4=(aux3-c6)/10;
    c7=aux4%10;
    aux5=(aux4-c7)/10;
    c8=aux5%10;
    aux6=(aux5-c8)/10;
    nbin=c1+c3*2+c4*4+c5*8+c6*16+c7*32+c8*64+aux6*128;
    cout<<"nbin="<<nbin;
    return 0;
}
