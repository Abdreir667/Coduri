#include <iostream>

using namespace std;

int main()
{
    int a,b,n,s=0,nrp=0,inv=0,c1,aux,nrd=0;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"n=";cin>>n;
    s=s+n;
    aux=n;
    while(a<=s && s<=b)
    {
        if(n>=0)
        nrp++;
        inv=0;
        while(aux!=0)
        {
            c1=aux%10;
            inv=inv*10+c1;
            aux=aux/10;
        }
        aux=n;
        for(int i=2;i<=aux/2;i++)
        {
            if(aux%i==0)
                nrd++;
        }
        if(nrd==0)
            cout<<"Inversul numarului dat este prim"<<endl;
        cout<<"n=";cin>>n;
        s=s+n;

    }
    return 0;
}
