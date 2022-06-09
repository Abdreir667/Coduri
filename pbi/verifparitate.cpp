#include <iostream>

using namespace std;

unsigned long long int n;
int nr;

int main(void)
{
    cin>>nr;
    for(int i=1;i<=nr;i++)
    {
        cin>>n;
        if((n^1)==n+1)
            cout<<0<<" ";
        else cout<<1<<" ";
    }
}