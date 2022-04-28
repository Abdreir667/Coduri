#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("soft_prime.in");
ofstream cout("soft_prime.out");

int arr[40001];

bool isprime(int nr)
{
    bool ok=1;
    if(nr<2) ok=0;
    for(int d=2; d*d<=nr && ok==1; d++)
      if(nr%d==0) ok=0;
    return ok;
}

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


int main(void)
{
    int n,nr,k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(isprime(nr)==true)
            arr[++k]=nr;
    }
    quicksort(arr,1,k);
    for(int i=1;i<=k;i++)
        cout<<arr[i]<<" ";
}