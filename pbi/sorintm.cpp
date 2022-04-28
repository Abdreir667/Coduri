#include <iostream> 
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    int nr,arr[1000],pozmax,pozmin,max=0,min=100000;
    cin>>nr;
    for(int i=1;i<=nr;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
            pozmax=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            pozmin=i;
        }
    }
    if(pozmin>pozmax)
        swap(pozmax,pozmin);
    sort(arr+pozmin,arr+pozmax+1);
    for(int i=1;i<=nr;i++)
        cout<<arr[i]<<" ";
}