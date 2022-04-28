#include <iostream>

using namespace std;

int main()
{
    int a,b,c,k=2,n;
    float s,p,s0,s1,sn;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    s=-b/a;
    p=c/a;
    s0=2;
    s1=s;
    while(k!=n)
    {
        sn=s*s1-p*s0;
        s0=s1;
        s1=sn;
        k++;
    }
    cout<<sn<<endl;

}