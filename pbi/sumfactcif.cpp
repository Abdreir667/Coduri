#include <iostream>

using namespace std;

int n;

long long sumfactcif(int n)
{
    int fact[]={1,1,2,6,24,120,720,5040,40320,362880};
    long long int s=0;
    if(n==0)
        return 1;
    while(n)
    {
        s+=fact[n%10];
        n/=10;
    }
    return s;
}

int main(void)
{
    cin>>n;
    cout<<sumfactcif(n)<<endl;
}