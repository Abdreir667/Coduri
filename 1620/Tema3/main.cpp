#include <iostream>

using namespace std;

int main()
{
    int a,p=1,z=0;
    cout<<"a=";cin>>a;
    while (a>0 && a!=0)
    {
    p=p*a;
    cout<<"a=";cin>>a;
    }
    cout<<"p="<<p<<"\n";
    do
    {
        if(p%10==0)
        {
        p=p/10;
        z=z+1;
        cout<<"z="<<z;
        }

    }
    while(p/10!=0);




    return 0;
}
