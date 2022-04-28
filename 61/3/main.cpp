#include <iostream>

using namespace std;

int main()
{
    int n,aux;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        int aux1=i;
        aux=n;
        while(aux1!=aux)
        {
            if(aux1>aux)
                aux1=aux1-aux;
            else aux=aux-aux1;
        }
        if(aux==1)
            cout<<"("<<i<<";"<<n<<")"<<endl;
    }
    return 0;
}
