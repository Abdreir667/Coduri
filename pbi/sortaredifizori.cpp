#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("sortare_divizori.in");
ofstream cout("sortare_divizori.out");

int arr1[10001],arr2[10001];

void quicksort(int arr[],int st,int dr)
{
    if(st<dr) 
    {
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(arr1[m],arr1[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
                swap(arr1[i],arr1[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}

int sumadiv(int n)
{
    int s=0;
    for(int i=1;i<=sqrt(n);i++) 
    {
        if(n%i==0) 
            if(n/i==i)  
                s++;
            else s+=2;
    }
    return s;
}

int main(void)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr1[i];
        arr2[i]=sumadiv(arr1[i]);
    }
    quicksort(arr2,1,n);
    for(int i=1;i<=n;i++)
    {
        if(arr2[i]==arr2[i+1])
        {
            if(arr1[i]>arr1[i+1])
                swap(arr1[i],arr1[i+1]);
        }
        cout<<arr1[i]<<" ";
    }
}

