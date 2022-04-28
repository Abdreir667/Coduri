#include <iostream>

using namespace std;

int main()
{
    int x,n,a,b,c,k=0;
    cout<<"x=";cin>>x;
    cout<<"n=";cin>>n;
    a=x;
    b=x-2;
    while(k!=n-2)
    {
        c=x*b-a;
        a=b;
        b=c;
        k++;
    }
    cout<<c<<endl;

}