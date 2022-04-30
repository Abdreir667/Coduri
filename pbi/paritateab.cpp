#include <iostream>

using namespace std;

int n,a,b,nra=0,nrb=0;

int main(void)
{
    cin>>n>>a>>b;
    while(n%a!=0)
    {
        n-=b;
        nrb++;
    }
    for(int i=1;i<=n/a;i++)
        cout<<a<<" ";
    for(int i=1;i<=nrb;i++)
        cout<<b<<" ";
    
}