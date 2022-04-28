#include <iostream>
#include <fstream>

using namespace std;

int binarysearch(int arr[],int st,int dr,int nr)
{
    if(st>dr)
    {
        cout<<0<<" ";
        return 0;
    }
    int m=(st+dr)/2;
    if(arr[m]==nr)
    {
        cout<<1<<" ";
        return 1;
    }
    if(arr[m]>nr)
        binarysearch(arr,st,m-1,nr);
    if(arr[m]<nr)
        binarysearch(arr,m+1,dr,nr);
}

int main()
{
    int n,m,arr[1001],nr;
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>arr[i];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        binarysearch(arr,1,m,nr);
    }

}