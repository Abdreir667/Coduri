#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int aux1,aux2;
            aux1=i;
            aux2=j;
            while(aux1!=aux2)
            {
                if(aux1>aux2)
                    aux1=aux1-aux2;
                else
                    aux2=aux2-aux1;
            }
            if(aux1==1)
                cout<<i<<j<<endl;
        }
    }
    return 0;
}
