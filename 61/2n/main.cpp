#include <iostream>

using namespace std;

int main()
{
    int n,a,b,aux1,aux2,min=100000,p,mc;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    for(int i=2;i<=n;i++)
    {
        cout<<"b=";cin>>b;
        aux1=a;
        aux2=b;
        p=a*b;
        while(aux1!=aux2)
        {
            if(aux1>aux2)
                aux1=aux1-aux2;
            else aux2=aux2-aux1;
        }
        mc=p/aux1;
        if(aux1<min)
            min=aux1;
        a=b;
    }
    cout<<min<<endl;
    cout<<mc<<endl;
    return 0;
}
