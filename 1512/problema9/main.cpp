#include <iostream>

using namespace std;

int main()
{
    int n,a,k=0,x;
    cout<<"n=";cin>>n;
    while(k!=n)
    {
        x=2;
        cout<<"a=";cin>>a;
        while(x<=a)
        {
            x=x*2;
        }
        cout<<x/2<<endl;
        k++;
    }
    return 0;
}
