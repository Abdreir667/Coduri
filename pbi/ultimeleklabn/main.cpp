#include <iostream>

using namespace std;

int main()
{
    int b,n,p;
    cout<<"p=";cin>>p;
    cout<<"b=";cin>>b;
    cout<<"n=";cin>>n;
    int k=0,nr=1,k1=0,prod=1,rez;
    while(k!=n)
    {
      nr=nr*b;
      k++;
    }
    cout<<nr<<endl;
    while(k1!=p)
    {
        prod=prod*10;
        k1++;
    }
    cout<<prod<<endl;
    rez=nr%prod;
    cout<<rez<<endl;
    return 0;
}
