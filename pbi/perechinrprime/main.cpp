#include <iostream>

using namespace std;

int main()
{
    int a,b,k,n,nrp=1,nrfp1,nrfp2;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    do
    {
        int aux1,aux2;
        aux1=a;
        aux2=b;
        nrfp1=0;
        for(int j=2;j<=aux1/2;j++)
        {
            if(aux1%j==0)
            {
                nrfp1++;
                while(aux1%j==0)
                    aux1=aux1/j;
            }
        }
        nrfp2=0;
        for(int i=2;i<=aux2/2;i++)
        {
            if(aux2%i==0)
            {
                nrfp2++;
                while(aux2%i==0)
                    aux2=aux2/i;
            }
        }
        if(nrfp1==nrfp2)
            cout<<a<<b<<endl;
        a=b;
        cout<<"b=";cin>>b;
        nrp++;
    }
    while(nrp!=n);
    return 0;
}
