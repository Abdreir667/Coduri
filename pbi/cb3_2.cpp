#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("cb3.in");
ofstream cout("cb3.out");

int arr[10001], p;
long long suma[10001];
int n,q,nr;

int binarysearch(long long arr[],int nr)
{
    int st=1,dr=n;
    while(st<=dr)
    {
        int mij=(st+dr)/2;
        if(arr[mij]>nr)
            dr=mij-1;
        if(arr[mij]<nr)
            st=mij+1;
        if(arr[mij]==nr)
            return mij;
    }
    return dr;
}

int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    //countingsort(arr,n);
    sort(arr+1,arr+n+1);
    suma[0]=0;
    for(int i=1;i<=n;i++)
        suma[i]=suma[i-1]+arr[i];
    for(int i=1;i<=q;i++)
    {
        cin>>nr;
        cout<<binarysearch(suma,nr)<<"\n";
    }

}