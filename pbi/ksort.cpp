#include <fstream>

using namespace std;

ifstream cin("ksort.in");
ofstream cout("ksort.out");

int arr[1001],auxtemp[1001];


void ord(int arr[],int n,int k)
{
    for(int i=1;i<=k;i++)
    {
        for(int j=i;j<n;j=j+k)
            for(int l=j+k;l<=n;l=l+k)
                if(arr[j]>arr[l])
                    swap(arr[j],arr[l]);
    }
}

int main(void)
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)   
        cin>>arr[i];
    ord(arr,n,k);
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}