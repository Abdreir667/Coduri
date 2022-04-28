#include <iostream>

using namespace std;

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

int main(void)
{
    int n,arr[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    quicksort(arr,1,n);
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}