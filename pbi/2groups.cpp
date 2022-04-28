#include <iostream>
#include <fstream>

using namespace std;

long long n,i=0;

int main(void)
{
    cin>>n;
    cout<<n<<" ";
    for(i=n-3;i>=2;i-=4)
        cout<<i<<" "<<i-1<<" ";
    if(i==1)
        cout<<1;
    cout<<endl;
    for(i=n-1;i>=2;i-=4)
        cout<<i<<" "<<i-1<<" ";
    if(i==2)
        cout<<1;
}