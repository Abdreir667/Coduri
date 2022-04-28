#include <iostream>

using namespace std;

int main()
{
    int a,b,k;
    cout<<"a=";cin>>a;
    cout<<"k=";cin>>k;
    for(int i=2;i<=a-1;i++)
    {
        for(int j=i+1;j<=a;j++)
        {
            int aux1,aux2;
            aux1=j;aux2=i;
            while(aux1!=aux2)
            {
                if(aux1>aux2)
                    aux1=aux1-aux2;
                else aux2=aux2-aux1;
            }
            if(aux1==k)
                cout<<"("<<i<<";"<<j<<")"<<endl;
        }
    }
    return 0;
}
