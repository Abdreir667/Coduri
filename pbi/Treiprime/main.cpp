#include <iostream>

using namespace std;

int main()
{
    int n,nrd=0,nre,aux;
    cout<<"n=";cin>>n;
    for(int i=2;i<=n;i++)
    {
        aux=n;
        nre=0;
        if(aux%i==0)
        {
            while(aux%i==0)
            {
                aux=aux/i;
                nre++;
            }
            if(nre!=0)
            cout<<i<<endl;

        }
    }
    return 0;
}
