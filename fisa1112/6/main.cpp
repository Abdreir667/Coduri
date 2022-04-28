#include <iostream>

using namespace std;

int main()
{
    int p,nrd=0;
    cout<<"p=";cin>>p;
    for(int i=2;i<=p/2;i++)
    {
        if(p%i==0)
            nrd++;
    }
    if(nrd!=0)
    {
        do
        {
        cout<<"Dati un numar p care este prim"<<endl;
        cout<<"p=";cin>>p;
        for(int i=2;i<=p/2;i++)
            {
               if(p%i==0)
               nrd++;
            }
        }
        while(nrd!=0);
    }
    else if(nrd==0)
    {
    int n,nre=0,nrc=0,p,nri=0,ok=1;
    cout<<"n=";cin>>n;
    int max=n;
    while(nre==nrc)
    {
        while(n>0)
    {
        int aux=n,nre1=0,nrp=0;
        while(nre1<=nrp)
        {
            if(aux%p==0)
            {
                aux=aux/10;
                nrp++;
                nre1++;
            }
            else
            {
                aux=aux/10;
                nre1++;
            }
            if(nre1==nrp)
          nri++;
        }
    }

        cout<<"n=";cin>>n;
        if(n>max)
        {
            max=n;
            nrc++;
        }
        else if(n<max)
        {
            max=max;
        }
        nre++;
    }

    cout<<nri<<endl;
    }

    return 0;
}
