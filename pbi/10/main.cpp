#include <iostream>

using namespace std;

int main()
{
    int n,ok=0,aux,c1;
    cout<<"n=";cin>>n;
    aux=n;
    while(n!=0)
    {
        c1=n%10;
        if(c1==1 || c1==0)
        {
            ok=1;
        }
        n=n/10;
    }
    if(ok==1)
        cout<<"Numarul "<<aux<<" are cifrele cerute";
    else
        cout<<"Numarul "<<aux<<" nu are cifrele cerute";

    return 0;
}
