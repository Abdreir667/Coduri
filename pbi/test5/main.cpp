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
void print(int arr[],int size){
    for(int i=0;i<=size-1;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={1,2,9,54,432,76,-123,654,20,564};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    print(arr,n);
    return 0;
}
