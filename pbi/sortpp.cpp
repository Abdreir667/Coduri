#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("sortpp.in");
ofstream cout("sortpp.out");

int arr[1001],n,patp[1001],nr,k=0;

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
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(floor(sqrt(nr))==sqrt(nr))
        {
            arr[i]=50001;
            patp[++k]=nr;
        }
        else arr[i]=nr;
    }
    quicksort(patp,1,k);
    k=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==50001)
            cout<<patp[++k]<<" ";
        else cout<<arr[i]<<" ";
    }

}