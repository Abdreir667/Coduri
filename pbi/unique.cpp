#include <iostream>
#include <vector>

using namespace std;

unsigned int n,nr,k;

int main(void)
{
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>nr;
        n=n^nr;
    }
    cout<<n;
}