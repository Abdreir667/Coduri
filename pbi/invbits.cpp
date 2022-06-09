#include <iostream>
#include <bitset>

using namespace std;

unsigned int n,m,k=0;

int main(void)
{
    cin>>n;
    if(n==0)
       {
           cout<<1;
           return 0;
       }
    bitset<32> bitset1(n);
    for(int i=2,j=1;i<=n;i*=2,j++)
    {
        if(bitset1[j]==0)
            bitset1[j]=1;
        else if(bitset1[j]==1) bitset1[j]=0;
    }
    m=(unsigned int)(bitset1.to_ullong());
    if(n%2==0)
        m++;
    cout<<m<<endl;
}