#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sortsum.in");
ofstream cout("sortsum.out");

int numere[1000001],sumanr[1000001],nr,k=0;

int sumac(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n/=10;
    }
    return s;
}

void quicksort(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(numere[m],numere[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                swap(numere[i],numere[j]);
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
    while(cin>>nr)
    {
        numere[++k]=nr;
        sumanr[k]=sumac(nr);
    }
    quicksort(sumanr,1,k);
    int temp=1;
    for(int i=1;i<=k;i++)
    {
        int aux=sumanr[i];
        while(sumanr[temp]==aux)
            temp++;
        sort(numere+i,numere+temp,greater<int>());
        i=temp-1;
    }
    for(int i=1;i<=k;i++)
        cout<<numere[i]<<" ";
}

