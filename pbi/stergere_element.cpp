#include <iostream>

using namespace std;

int tablou[1501],n,p;

int main(void)
{
    cin>>n>>p;
    for(int i=1;i<=n;i++)
        cin>>tablou[i];
    for(int i=p;i<n;i++)
        tablou[i]=tablou[i+1];
    n--;
    for(int i=1;i<=n;i++)
        cout<<tablou[i]<<" ";
}