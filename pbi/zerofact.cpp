#include <iostream>

using namespace std;

int n;

int nz(int n)
{
    int aux=n,nr5=0,nr0=0;
    for(int i=5;i<=n;i*=5)
        nr0+=n/i;
    return nr0;
}

int main(void)
{
    cin>>n;
    cout<<nz(n);
}