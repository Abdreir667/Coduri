#include <fstream>

using namespace std;

ifstream cin("inaltimi.in");
ofstream cout("intaltimi.out");

int arr1[1000000],arr2[1000000],n;

void quicsort(int arr[],int st,int dr)
{
    if(st<dr) 
    {
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(arr2[m],arr2[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                swap(arr2[i],arr2[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicsort(arr,st,i-1);
        quicsort(arr,i+1,dr);
    }
}

int main(void)
{   
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr1[i];
        arr2[i]=i;
    }
    quicsort(arr1,1,n);
    for(int i=1;i<=n;i++)
        cout<<arr2[i]<<" ";
}