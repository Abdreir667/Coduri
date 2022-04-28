#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("halfsort.in");
ofstream cout("halfsort.out");

int n;
long long arr[101];

void quicksort(long long arr[],int st,int dr){
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
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    quicksort(arr,1,n/2);
    sort(arr+n/2+1,arr+n+1,greater<int>());
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}