#include <iostream>
#include <bitset>

using namespace std;

int b;
long long n;

int main(void)
{
    cin>>n>>b;
    bitset<64> bitset(n);
    bitset[b]=1;
    cout<<(long long)(bitset.to_ullong());
}