#include <iostream>

using namespace std;

int main()
{
    int n,nre=0,nrc=0,p,nri=0,nrp=0;
    cout<<"p=";cin>>p;
    cout<<"n=";cin>>n;
    int max=n;
    while(nre>=nrc)
    {
    while(nre<=nrp)
    {
        int aux=n,nre1=0;
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
    cout<<nri<<endl;
    }


    return 0;
}
