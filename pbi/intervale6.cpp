#include <fstream>

using namespace std;

ifstream cin("intervale6.in");
ofstream cout("intervale6.out");

int n,arr[10001],x,y,nre=0;

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

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    while(cin>>x>>y)  
    {
        if(binarysearch(arr,1,n,y)-binarysearch(arr,1,n,x-1)==0)
            nre++;
    }
    cout<<nre;
}