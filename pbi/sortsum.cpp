#include <fstream>
#include <iostream>

using namespace std;

int arr[1001],barr[1001],carr[1001],o,k=0;

ifstream fin("sortsum.in");
ofstream fout("sortsum.out");

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
void quicksort(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(barr[m],barr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                swap(barr[i],barr[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}
void quicksortdesc(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]<arr[j])
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
void sumadif(int arr[])
{
    bool cond=false;
    o=0;
    for(int i=1;i<=k;i++)
    {
       cond=false;
        for(int j=1;j<=o;j++)
        {
            if(arr[i]==carr[j])
            {
                cond=true;
                break;
            }
            else cond=false;
        }
        if(cond==false)  
            carr[++o]=arr[i];
    }
}
int main(void)
{
    int n;
    while(fin>>n)
    {
        arr[++k]=sumac(n);
        barr[k]=n;
    }
    for(int i=1;i<=k;i++)
        quicksort(arr,1,k);
    sumadif(arr);
    int start=1,stop=1;
    for(int i=1;i<=o;i++)
    {
        for(int j=start;j<=k;j++)
            if(carr[i]==arr[j])
                stop=j;
        quicksortdesc(barr,start,stop);
        start=stop+1;
    }
    for(int i=1;i<=k;i++)
        fout<<barr[i]<<" ";

    
}

