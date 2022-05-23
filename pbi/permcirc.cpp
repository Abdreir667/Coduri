#include <iostream>

using namespace std;

int tab[16],n;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>tab[i];
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        int prim=tab[1];
        for(int j=1;j<n;j++)
            tab[j]=tab[j+1];
        tab[n]=prim;
        for(int j=1;j<=n;j++)
            cout<<tab[j]<<" ";
        cout<<endl;
    }
}