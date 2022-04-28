#include <iostream>

using namespace std;

int main()
{
    int n,a,m,nri=0;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        int aux,s,c1;
        aux=a;
        s=0;
        while(aux!=0)
        {
            c1=aux%10;
            s=s+c1;
            aux=aux/10;
        }
        if(s==m)
        nri++;
    }
    cout<<nri<<endl;
    return 0;
}
