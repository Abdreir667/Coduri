#include <iostream>

using namespace std;

int main()
{
    int n,k=0,a,b,aux,nrc=0;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    while(k!=n)
    {
       if(a>b)
       {
         aux=a;
         a=b;
         b=aux;
       }
       else if(a<b)
       {
           a=a;
           b=b;
           nrc++;
       }
       k=k+2;
       cout<<a<<" "<<b<<endl;
       cout<<"a=";cin>>a;
       cout<<"b=";cin>>b;
    }
    cout<<nrc<<endl;
    return 0;
}
