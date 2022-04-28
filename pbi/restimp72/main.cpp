#include <iostream>

using namespace std;

int main()
{
    int n,k,nr=0;;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    int aux,p=1,nre=0;
    aux=n;
    while(aux!=0)
    {
        p=p*10;
        aux=aux/10;
    }
    while(nre!=k)
    {
        nr=nr*p+n;
        nre++;
    }
    cout<<"Restul impartirii numarululi la 72 este "<<nr%72<<endl;

    return 0;
}
