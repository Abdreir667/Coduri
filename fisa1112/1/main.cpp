#include <iostream>

using namespace std;

int main()
{
    int a,nri=0,b,min,max;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    do
    {
        if(a%2!=0 || b%2!=0)
        {
            nri=nri+1;
        }
        if(a%2!=0 && b%2!=0)
        {
            cout<<a<<b<<endl;
        }
        cout<<"a=";cin>>a;
        cout<<"b=";cin>>b;
    }
    while(a!=0 || b!=0);






    return 0;
}
