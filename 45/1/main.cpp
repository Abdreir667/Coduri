#include <iostream>

using namespace std;

int main()
{
    int n,m,p=1;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    while(m>0)
    {
        p=p*n;
        m=m-1;
    }
    cout<<"Produsul va fi="<<p;








    return 0;
}
