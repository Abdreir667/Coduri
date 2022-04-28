#include <iostream>

using namespace std;

int main(void)
{
    short n,k=0,poz;
    long long tab[101],bun[101],a,b,aux;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>tab[i];
    for(int i=1;i<n;i++)
    {
        a=tab[i];
        b=tab[n];
        while(a!=b)
            if(a>b)
                a=a-b;
            else b=b-a;
        if(a==1)
            bun[++k]=tab[i];
    }
    for(int i=2;i<k;i++)  
        if(bun[i]>bun[i-1]) 
        {
            aux=bun[i];
            poz=i-1;
            while(bun[poz]<aux && poz>0)
            {
                bun[poz+1]=bun[poz];
                poz--;
            }
            bun[poz+1]=aux;
        }
    for(int i=1;i<=k;i++)
        cout<<bun[i]<<" ";
}