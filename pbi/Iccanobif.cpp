#include <iostream>

using namespace std;

int main()
{
    int p,n;
    cout<<"p=";cin>>p;
    cout<<"n=";cin>>n;
    if(p==1)
    {
        int n1=1,n2=1,n3;
        if(n==1 || n==2)
            n==1;
        else
        {
        for(int i=3;i<=n;i++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        cout<<n3<<endl;
        int nrd=0;
        for(int j=3;j<=n;j++)
            if(n3%j==0)
                nrd++;
        cout<<nrd<<endl;
        }
    }
    if(p==2)
    {
        int n1=1,n2=1,n3;
        int aux1,aux2,inv1=0,inv2=0;
        for(int j=3;j<=n;j++)
        {
        aux2=n2;
        inv2=0;
        while(aux2!=0)
        {
            inv2=inv2*10+aux2%10;
            aux2=aux2/10;
        }
        n1=inv2;
        n2=inv1;
        n3=n1+n2;
        aux1=n3;
        inv1=0;
        while(aux1!=0)
        {
            inv1=inv1*10+aux1%10;
            aux1=aux1/10;
        }
        cout<<n3<<endl;
        }
    }
}