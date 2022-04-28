#include <iostream>

using namespace std;

int main()
{
    int c1,c2,n,k=0,nrc=0,c3,s=0,nrc1,cf,inv=0;
    cout<<"n=";cin>>n;
    cout<<"c1=";cin>>c1;
    cout<<"c2=";cin>>c2;
    int aux=n,aux1=n;
    while(aux!=0)
    {
        aux=aux/10;
        k++;
    }
    while(nrc!=k)
    {
        c3=aux1%10;
        aux1=aux1/10;
        if(c3==c1)
        {
            s=s*10+c2;
        }
        if(c3!=c1)
        {
            s=s*10+c3;
        }
        nrc++;
    }
    while(nrc1!=nrc)
    {
        cf=s%10;
        inv=inv*10+cf;
        s=s/10;
        nrc++;
    }
    cout<<inv;


    return 0;
}
