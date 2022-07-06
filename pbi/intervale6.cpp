#include <stdio.h>

using namespace std;

FILE *in= fopen("intervale6.in", "r");
FILE *out= fopen("intervale6.out", "w");

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
    return 1;
}

int main(void)
{
    fscanf(in, "%d",&n);
    for(int i=1;i<=n;i++)
        fscanf(in,"%d",&arr[i]);
    while(in!=EOF) 
    {

        if(binarysearch(arr,1,n,y)-binarysearch(arr,1,n,x-1)==0)
            nre++;
    }
    fprintf(out,"%d\n",nre);
}