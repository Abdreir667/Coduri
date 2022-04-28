#include <iostream>

using namespace std;

int main()
{
    int mc;
    cout<<"mc=";cin>>mc;
    for(int i=1;i<=mc-1;i++)
    {
        for(int j=i+1;j<=mc;j++)
        {
            int aux1,aux2;
            aux1=i,aux2=j;
            while(aux1!=aux2)
            {
                if(aux1>aux2)
                    aux1=aux1-aux2;
                else
                    aux2=aux2-aux1;
            }
            if((i*j)/aux1==mc)
                cout<<i<<j<<endl;
        }
    }

    return 0;
}
