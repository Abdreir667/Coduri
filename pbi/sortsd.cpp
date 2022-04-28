#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("sortsd.in");
ofstream cout("sortsd.out");

int n,arr[1001],numar[1001];

int sumadiv(int n)
{
    int s=0;
    for(int i=1;i<=sqrt(n);i++) 
    {
        if(n%i==0) 
            if(n/i==i)  
                s+=i;
            else s+=i+n/i;
    }
    return s;
}

void quicksort(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(numar[m],numar[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                swap(numar[i],numar[j]);
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
        cin>>numar[i];
        arr[i]=sumadiv(numar[i]);
    }
    quicksort(arr,1,n);
    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]==arr[i+1] && numar[i]>numar[i+1])
            swap(numar[i],numar[i+1]);
    }
    for(int i=1;i<=n;i++)
        cout<<numar[i]<<" ";
    
}