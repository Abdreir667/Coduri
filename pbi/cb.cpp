#include <iostream>
#include <fstream>
//6 1 3 5 3 3 9 20 9 
//1 3 3 3 5 6 9 9 20
//4 10
using namespace std;

ifstream f("cb.in");
ofstream g("cb.out");

int arr[200001];

void quicksort(int arr[],int st,int dr)
{
    if(st<dr)
    {
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

int binarysearch(int arr[],int st,int dr,int nr)
{
    int p=0;
    while(st<=dr)
    {
        int m=(st+dr)/2;
        if(arr[m]<=nr)
        {
            p=m;
            st=m+1;
        }
        else dr=m-1;
    }
    return p;
}


int main()
{
    int n,t,x,y;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    quicksort(arr,1,n);
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y;
        cout<<binarysearch(arr,1,n,y)-binarysearch(arr,1,n,x)<<endl;
    }
    
}





