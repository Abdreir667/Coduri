#include <iostream>

using namespace std;

int main()
{
    int a,c1,c2,c3,c4,c5,nrf;
    cout<<"a=";cin>>a;
    c1=a/10000;
    c5=a%10;
    c2=((a-(10000*c1+c5))/10)/100;
    c4=((a-(10000*c1+c5))/10)%10;
    nrf=c1*1000+c2*100+c4*10+c5;
    cout<<"nrf="<<nrf;
    return 0;
}
