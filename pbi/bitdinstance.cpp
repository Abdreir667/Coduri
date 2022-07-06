#include <iostream>
#include <cmath>

using namespace std;

unsigned long long n;

int main(void)
{
    cin>>n;
    cout<<64- __builtin_clzll(n) - __builtin_ctzll(n);
}
