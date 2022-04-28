#include <iostream>

using namespace std;

int main()
{
    int n,a,max=1,min=1000000,nramax,nramin;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        int nre,aux,nrf,k,c1;
        if(10<=a && a<=99)
        nrf=a;
        if(a<10)
        nrf=a;
        if(99<a)
        {
            nre=0;
            aux=a;
            k=0;
            while(aux!=0)
            {
                nre++;
                aux=aux/10;
            }
            c1=a%10;
            while(k!=nre-1)
            {
                a=a/10;
                k++;
            }
            nrf=a*10+c1;
        }
        if(nrf>max)
        {
            max=nrf;
            nramax=1;
        }
        else if(nrf==max)
            nramax++;
        if(nrf<min)
        {
            min=nrf;
            nramin=1;
        }
        else if(nrf==min)
            nramin++;
    }
    int aux1,aux2;
    aux1=max;
    aux2=min;
    while(aux1!=aux2)
    {
        if(aux1>aux2)
            aux1=aux1-aux2;
        if(aux2>aux1) 
            aux2=aux2-aux1;
    }
    cout<<max<<" "<<min<<endl;
    cout<<nramax<<" "<<nramin<<endl;
    cout<<aux1<<endl;
}