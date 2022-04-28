#include <iostream>

using namespace std;

void sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
        for(int j=0;j<size;j++)
         if(arr[i]<arr[j])
            swap(arr[i],arr[j]);
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={1,2,9,54,432,76,-123,654,20,564};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    print(arr,n);
    return 0;
}