#include <fstream>

using namespace std;

ifstream cin("cifmin.in");
ofstream cout("cifmin.out");

int arr[1001],n,nr;

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

int cifmin(int n)
{
    int mini=2147483647;
    while(n)
    {
        mini=min(n%10,mini);
        n/=10;
    }
    return mini;
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        arr[i]=cifmin(nr);
    }
    quicksort(arr,1,n);
    if(arr[1]==0)
    {
        int k=1;
        while(arr[k]==0)
            k++;
        swap(arr[1],arr[k]);
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i];
}