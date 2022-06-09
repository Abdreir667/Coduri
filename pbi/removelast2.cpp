#include <iostream>
#include <bitset>

using namespace std;

int n,m;

int main(void)
{
    cin>>n;
    bitset<16> bitset1(n);
    bitset1[0]=bitset1[1]=1;
    cout<<(int)(bitset1.to_ullong());
}