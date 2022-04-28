#include <iostream>

using namespace std;

int main()
{
    int a,b,nri=0;
    cout<<"a=";cin>>a;
    if(a!=0)
    {
        cout<<"b=";cin>>b;
        int aux1,aux2;
            aux1=a;
            aux2=b;
            while(aux1!=aux2)
            {
                if(aux1>aux2)
                    aux1=aux1-aux2;
                else
                    aux2=aux2-aux1;
            }
            if(aux1==1)
                nri++;
        while(b!=0)
        {
            aux1=a;
            aux2=b;
            while(aux1!=aux2)
            {
                if(aux1>aux2)
                    aux1=aux1-aux2;
                else
                    aux2=aux2-aux1;
            }
            if(aux1==1)
                nri++;
            a=b;
            cout<<"b=";cin>>b;
        }
    }
    cout<<nri<<endl;
    return 0;
}
