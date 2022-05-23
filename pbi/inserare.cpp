#include <iostream>

using namespace std;

int tablou[27],n,p,x;

int main(void)
{
    cin>>n>>x>>p;
    for(int i=1;i<=n;i++)
        cin>>tablou[i];
    for(int i=n+1;i>=p;i--)
        tablou[i+1]=tablou[i];
    tablou[p]=x;
    n++;
    for(int i=1;i<=n;i++)
        cout<<tablou[i]<<" ";
}