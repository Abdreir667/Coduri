#include <fstream>
#include <algorithm>
#include <math.h>

using namespace std;

ifstream cin("sortsum.in");
ofstream cout("sortsum.out");

int arr[100001],n,numar[100001],k=0,barr[1001];

void quicksort(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(numar[m],numar[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]<arr[j])
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

int sumac(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}

int nrcif(int n)
{
    int nrc=0;
    while(n)
    {
        nrc++; 
        n/=10;
    }
    return nrc;
}

int main(void)
{
    while(cin>>n)
    {
        arr[++k]=sumac(n)*pow(10,nrcif(n))+n;
        barr[k]=sumac(n);
        numar[k]=n;
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    quicksort(arr,1,k);
    for(int i=1;i<=k;i++)
        cout<<numar[i]<<" ";
}
