#include <iostream>
#include <bitset>

using namespace std;

int n,k=0,t=0;

int main(void)
{
    cin>>n;
    bitset<16> bitset(n);
    for(int i=2;i<=n && k<=2;i*=2)
    {
        if(bitset[t]==0)
        {
            bitset[t]=1;
            k++;
        }
        t++;
    }
    cout<<bitset.to_ullong();
    
}