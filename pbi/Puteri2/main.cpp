#include <iostream>

using namespace std;

int main()
{
    int a,k,nri=0,n;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    for(int j=1;j<=n;j++)
    {
        cout<<"a=";cin>>a;
    for(int i=1;i<=a;i=i*k)
    {
        int aux;
        aux=a;
        if(i==a)
            nri++;
        else
        {
            while(aux!=0)
            {
                if(a%2==0)
                {
                    aux=aux-i;

                }
            }
        }

    }
    cout<<nri<<endl;
    }
    return 0;
}
