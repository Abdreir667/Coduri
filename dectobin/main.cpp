#include <iostream>

using namespace std;

int main()
{
    int dec,bin=0,aux,nre=0;
    cout<<"Introduceti un numar decimal mai mic decat 225"<<endl;cin>>dec;
    aux=dec;
    while(aux!=0)
    {
        if(aux%2==0)
        {
            bin=bin*10;
        }
        if(aux%2==1)
        {
            bin=bin*10+1;
        }
        aux=aux/2;
    }
    int aux2=bin,nre2=0,inv=0,aux3,c2;
    while(aux2!=0)
    {
        aux2=aux2/10;
        nre2++;
    }
    while(nre2!=8)
    {
        bin=bin*10;
        nre2++;
    }
     aux3=bin;
    while(aux3!=0)
    {
       c2=aux3%10;
       inv=inv*10+c2;
       aux3=aux3/10;
    }
    cout<<inv<<endl;
    return 0;
}
