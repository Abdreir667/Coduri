#include <iostream>

using namespace std;

int main()
{
    int n,a,k=0,dc,aux2;
    cout<<"n=";cin>>n;
    aux2=n;
    while(n!=k)
    {
        cout<<"a=";cin>>a;
        int aux1=a;
        dc=0;
        while(aux1!=aux2)
        {
            if(aux1>aux2)
                aux1=aux1-aux2;
            else
                aux2=aux2-aux1;
        }
        cout<<aux2<<endl;
        k++;
    }
    return 0;
}
