#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k,n,nre=0,nre1=0,mg=1,m,aux,nre2=0;
    cout<<"k=";cin>>k;
    aux=k-1;
    while(nre!=k)
    {
        if(k%2==0 && k!=2)
        {
           cin>>n;
           cin>>m;
        while(nre1!=k-(k-1))
        {
            mg=mg*sqrt(n*m);
            nre1++;
        }
        nre=nre+2;
        }
        if(k==2)
        {
           cin>>n;
           cin>>m;
           mg=sqrt(m*n);
           nre=nre+2;
        }
        if(k%2!=0)
        {
           while(nre2!=k-1)
            {
            cin>>n;
            cin>>m;
            while(nre1!=k-(k-1))
                {
                mg=mg*sqrt(n*m);
                nre1++;
                }
              nre2=nre2+2;
            }
            cin>>n;
            mg=sqrt(mg*n);
            nre=nre2+1;
        }

    }
    cout<<"Media geomentrica este egala cu "<<mg<<endl;
    return 0;
}
