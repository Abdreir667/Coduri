#include <iostream>

using namespace std;

int main()
{
    int n,s,min=1,k=0,max=10,nrn=0,c1,aux;
    cout<<"n=";cin>>n;
    cout<<"s=";cin>>s;
    while(k!=n-1)
    {
       min=min*10;
       k++;
       max=max*10;
    }
    for(int i=min;i<max;i++)
    {
        aux=i;
        int s1=0;
        while(aux!=0)
        {
        c1=aux%10;
        s1=s1+c1;
        aux=aux/10;
        }
        if(s1==s)
        {
        cout<<i<<" ";
        nrn++;
        }
    }
    cout<<endl<<nrn;

    return 0;
}
