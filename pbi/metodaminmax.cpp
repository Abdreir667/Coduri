#include <fstream>

using namespace std;

ifstream cin("sortarevectori.in");
ofstream cout("sortarevectori.out");

int main(void)
{
    int arr[1001],n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n-1;i++)
    {
        int min=arr[i];
        int poz=i;
        for(int j=1;j<=n;j++)
            if(arr[j]<min)
            {
                poz=j;
                min=arr[j];
            }
        if(arr[i]!=min)
            swap(arr[i],min);
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}   