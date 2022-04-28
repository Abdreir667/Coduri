#include <iostream>

using namespace std;

int main()
{
    int n,uc,uc2,a,b;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    if(n>=5)
        uc=0;

    if(n==4)
        uc=4;
    if(n==3)
        uc=6;
    if(n==2)
        uc=2;
        cout<<"ultima cifra="<<uc;


    return 0;
}
