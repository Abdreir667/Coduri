#include <iostream>

using namespace std;

int main(void)
{
    int n,nr,arr[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
        if(arr[i]%arr[n]==0)
            cout<<arr[i]<<" ";
}