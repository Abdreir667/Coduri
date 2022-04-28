#include <iostream>

using namespace std;

int main()
{
    int n,aux,nrc=0,p=1,nre=1,s=0,c1,s1=0,c;
    cin>>n;
    aux=n;
    while(aux!=0)
    {
        c1=aux%10;
        s=s+c1;
        aux=aux/10;
        nrc++;

    }
    while(nre!=nrc)
    {
        p=p*10;
        nre++;
    }
    for(int i=p;i<=n;i++)
    {
        int aux1=i;
        while(aux1!=0)
        {
        c=aux1%10;
        s1=s1+c;
        aux1=aux1/10;
        }
        if(s==s1)
            cout<<i;
    }


    return 0;
}
