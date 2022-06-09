#include <iostream>
#include <bitset>

using namespace std;

long long n,m=0;

int main(void)
{
    cin>>n;
    bitset<64> bitset1(n);
    for(int i=2;i<=n;i*=2)
        m++;
    cout<<m;

}