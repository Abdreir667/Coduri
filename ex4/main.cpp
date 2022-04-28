#include <iostream>

using namespace std;

int main()
{
    int a,inv,aux,c1,dc,aux2;
    cout<<"a=";cin>>a;
    for(int i=1;i<a;i++)
    {
        aux=i;
        aux2=i;
        inv=0;
        while(aux!=0)
        {
            c1=aux%10;
            inv=inv*10+c1;
            aux=aux/10;
        }
        while(inv!=aux2)
        {
            if(inv>aux2)
            {
                inv=inv-aux2;
            }
            if(aux2>inv)
            {
                aux2=aux2-inv;
            }
            dc=aux2;
        }
        if(dc==1)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
