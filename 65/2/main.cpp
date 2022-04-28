#include <iostream>

using namespace std;

int main()
{
    int n,k=1,nrd,s,m,aux;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(int i=2;i<=100000;i++)
    {
        s=0;
        nrd=0;
        aux=i;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            nrd++;
        if(nrd==0)
        {
            while(aux!=0)
            {
                s=s+aux%10;
                aux=aux/10;
            }
            if(s==m)
            {
                cout<<i<<endl;
                k++;
            }
        }
            if(k>n)
            break;
    }
    return 0;
}
