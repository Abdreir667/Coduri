#include <iostream>
#include <bitset>

using namespace std;

int n;
long long b,temp;

int main(void)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp>>b;
        bitset<64> bitset1(temp);
        cout<<bitset1[b];
    }
}