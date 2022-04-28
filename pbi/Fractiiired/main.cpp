#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"a=";cin>>a;
    for(int i=1;i<=a;i++)
    {
        int aux,aux1;
        aux=i;
        aux1=a;
        while(aux!=aux1)
        {
            if(aux>aux1)
                aux=aux-aux1;
            else aux1=aux1-aux;
        }
        if(aux==1)
            cout<<i<<"/"<<a<<endl;
    }
    return 0;
}
