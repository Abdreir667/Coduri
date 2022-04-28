#include <iostream>

using namespace std;

int main()
{
    int n,k,c1,aux,p=1;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    aux=n;
    while(n!=0)
    {
       c1=n%10;
       if(c1!=k)
       {
           p=p*c1;
       }
       n=n/10;
    }
    cout<<p<<endl;
    return 0;
}
