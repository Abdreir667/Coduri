#include <iostream>

using namespace std;
 
int n;

int main(void)
{
    int nr;
    cin>>n;
    if(n==0)
        cout<<1;
    else
    {
    for(int i=1;i<=n;i++)
        nr=1<<n;
    cout<<nr;
    }
}