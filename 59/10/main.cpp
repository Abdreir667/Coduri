#include <iostream>

using namespace std;

int main()
{
    int a,r,b,c1,x,s;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    while(a<b)
    {
    s=0;
    x=a;
    while(x!=0)
    {
        c1=x%10;
        s=s+c1;
        x=x/10;
    }
    if(s%2==0)
    {
        cout<<a<<endl;;
    }
    a=a+1;
    }

    return 0;
}
