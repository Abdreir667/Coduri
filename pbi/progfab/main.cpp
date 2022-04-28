#include <iostream>

using namespace std;

int main()
{
    int n,aux,spc=0;
    cout<<"n=";cin>>n;
    aux=n;
    while(n!=0)
    {
        c1=n/10;
        spc=spc*spc+c1;
        n=n/10;
    }
    return 0;
}
