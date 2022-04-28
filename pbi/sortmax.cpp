#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001],n,maxi=0,pozf;

void quicksort(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}
void quicksortdesc(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            pozf=i;
        }
    }
    quicksort(arr,1,pozf);
    sort(arr+pozf+1,arr+n+1,greater<int>());
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}

