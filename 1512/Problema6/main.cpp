#include <iostream>

using namespace std;

int main()
{
    int a,b,aux1,aux2;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b-1;i++)
    {
        for(int j=a-1;j<=b;j++)
        {
            aux1=i;
            aux2=j;
            while(aux1!=aux2)
            {
                if(aux1>aux2)
                {
                    aux1=aux1-aux2;
                }
                if(aux2>aux1)
                {
                    aux2=aux2-aux1;
                }
            }
                if(aux2==1)
                    cout<<i<<j<<endl;
        }
    }
    return 0;
}
