#include <iostream>

using namespace std;

int tablou[1001],n;

void stergere_element(int p)
{
    for(int i=p;i<n;i++)
        tablou[i]=tablou[i+1];
    n--;
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>tablou[i];
    for(int i=n;i>=1;i--)
    {
        if(tablou[i]%2==0)
            stergere_element(i);
    }
    for(int i=1;i<=n;i++)
        cout<<tablou[i]<<" ";
}