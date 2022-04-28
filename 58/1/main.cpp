#include <iostream>

using namespace std;

int main()
{
    int n,s=0,p=1;
    cout<<"n=";cin>>n;
    while(n!=0)
    {
        if(n%2==0)
            s=s+n;
            p=p*n;
            cout<<"n=";cin>>n;
        if(n%2!=0)
            cout<<"n=";cin>>n;
    }
        cout<<"Suma si prdusul sunt="<<s<<" "<<p;

    return 0;
}
