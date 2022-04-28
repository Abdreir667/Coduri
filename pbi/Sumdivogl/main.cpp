#include <iostream>

using namespace std;

int main()
{
    int n,a,s;
    cout<<"n=";cin>>n;
    for(int k=1;k<=n;k++)
    {
        cout<<"a=";cin>>a;
        int inv,aux,c1;
        aux=a;
        inv=0;
        s=0;
        while(aux!=0)
        {
            c1=aux%10;
            inv=inv*10+c1;
            aux=aux/10;
        }
        for(int i=2;i<=inv/2;i++)
        {
            if(inv%i==0)
                s=s+i;
        }
        cout<<s<<endl;
    }
    return 0;
}
