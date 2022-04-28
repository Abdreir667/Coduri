#include <iostream>

using namespace std;

int main()
{
    int n,aux,p=1,c1;
    cout<<"n=";cin>>n;
    aux=n;
    while(aux!=0)
    {
        c1=aux%10;
        if(c1%2!=0)
        {
            p=p*c1;
        }
        aux=aux/10;
    }
    cout<<p<<endl;
    return 0;
}
