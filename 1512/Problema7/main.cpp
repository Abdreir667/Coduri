#include <iostream>
//Fie a și b două numere naturale nenule. Să se determine numerele din intervalul închis determinat de a și
//b care au proprietatea că numărul este prim, iar numărul fără ultima cifră nu este prim.

using namespace std;

int main()
{
    int a,b,aux,nrd,ok2,nrd2,ok,aux2;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        ok=0;
        aux=i;
        nrd=0;
        for(int j=2;j<=aux/2;j++)
            if(aux%j==0)
                nrd++;
        if(nrd==0)
            ok=1;
        if(ok==1)
        {
            aux2=i/10;
            nrd2=0;
            ok2=1;
            for(int k=2;k<=aux2/2;k++)
                if(aux2%k==0)
                    nrd2++;
            if(nrd2!=0)
                ok==0;
            if(ok==0)
                cout<<i<<endl;

        }

    }
    return 0;
}
