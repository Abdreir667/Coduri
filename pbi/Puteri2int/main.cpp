#include <iostream>

using namespace std;

int main()
{
    int a,b,n,k=1,aux,nrp;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    if(a!=0)
    {
        cout<<"b=";cin>>b;
        while(k!=n || k==1)
        {
            for(int i=a;i<=b;i++)
            {
                nrp=0;
                aux=i;
                while(aux%2==0)
                {
                aux=aux/2;
                nrp++;
                }
                cout<<nrp<<endl;
            }
            a=b;
            cout<<"b=";cin>>b;
            k++;
        }
    }
    return 0;
}
