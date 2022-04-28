#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("pow2.in"); 
ofstream cout("pow2.out");

long long puteri[32];
int arr1[100001],copie[100001],maxi=0,mini=2147483647;
int nre=0;

void quicksort(int arr[],int st,int dr)
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        swap(arr[st],arr[m]);
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

void populare(void)
{
    int k=0,i=0,temp;
    do
        puteri[++k]=pow(2,i++);
    while(k<=31 && puteri[k]<=maxi);
}

void binary_searchmax(int arr[],int st,int dr,int nr)
{
    int p=0;
    while(st<=dr)
    {
        int m=(st+dr)/2;
        if(arr[m]<nr)
            st=m+1;
        else 
        {
            p=m;
            dr=m-1;
        }
    }
    cout<<dr<<" "<<st<<endl;
}

int main(void)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr1[i];
        copie[i]=arr1[i];
        maxi=max(maxi,arr1[i]);
        mini=min(mini,arr1[i]);
    }
    populare();
    quicksort(copie,1,n);
    for(int i=1;i<=n;i++)
        binary_searchmax(copie,1,n,puteri[i]);
    //cout<<nre<<endl;
}