#include <iostream>

using namespace std;

int main()
{
    int n,s,k=1,max=10,min=1,nri=0,s1,c1;
    cout<<"n=";cin>>n;
    cout<<"s=";cin>>s;
    while(k!=n)
    {
        min=min*10;
        max=max*10;
        k++;
    }
    for(int i=min;i<=max;i++)
    {
        int aux=i;
        s1=0;
        while(aux!=0)
        {
            c1=aux%10;
            s1=s1+c1;
            aux=aux/10;
        }
        if(s1==s)
        {
            cout<<i<<endl;
            nri++;
        }
    }
    cout<<nri<<endl;

    return 0;
}
