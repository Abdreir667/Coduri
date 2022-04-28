#include <fstream>

using namespace std;

ifstream cin("cb3.in");
ofstream cout("cb3.out");

int arr[10001], p;
long long suma[10001];

int binarysearch(long long arr[],int st,int dr,int nr)
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
    cout<<p<<endl;
}

int countingsort(int arr[],int dr)
{
    int maxi=0;
    for(int i=1;i<=dr;i++)
        maxi=max(maxi,arr[i]);
    int frecventa[maxi+1];
    for(int i=1;i<=maxi+1;i++)
        frecventa[i]=0;
    for(int i=1;i<=dr;i++)
        frecventa[arr[i]]++;
    for(int i=1,j=1;i<=maxi;i++)
    {
        while(frecventa[i]>0)
        {
            arr[j]=i;
            j++;
            frecventa[i]--;
        }
    }
}


int main()
{
    int n,q,nr;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    countingsort(arr,n);
    for(int i=0;i<=n;i++)
        suma[i]=suma[i-1]+arr[i];
    for(int i=1;i<=q;i++)
    {
        cin>>nr;
        binarysearch(suma,1,n,nr);
    }

}