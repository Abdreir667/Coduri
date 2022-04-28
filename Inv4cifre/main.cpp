#include <iostream>

using namespace std;

int main()
{
    int a,c1,c2,c3,c4,inv;
    cout<<"a=";cin>>a;
    c1=a/1000;
    c4=a%10;
    c2=(a-(1000*c1+c4))/100;
    c3=((a-(1000*c1+c4))/10)%10;
    inv=c4*1000+c2*100+c3*10+c1;
    cout<<"inv="<<inv;

    return 0;
}
