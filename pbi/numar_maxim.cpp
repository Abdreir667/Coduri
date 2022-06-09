#include <iostream>

using namespace std;

int n;

int nrmaxim(int n)
{
    int tab[11],k=0,maxi=n;
    while(n)
    {
        tab[++k]=n%10;
        n/=10;
    }
    for(int i=1;i<k;i++)
    {
        int prim=tab[1];
        for(int j=1;j<k;j++)
            tab[j]=tab[j+1];
        tab[k]=prim;
        int temp=0;
        for(int j=k;j>=1;j--)
            temp=temp*10+tab[j];
        maxi=max(temp,maxi);
    }
    return maxi;
}

int main(void)
{
    cin>>n;
    cout<<nrmaxim(n);
}