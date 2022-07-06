#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[10001],nr,k;

bool Two_Pointers_Prod(int arr[],long long p,int lung)
{
    int i=1,j=lung;
    while(i<j)
    {
        if(arr[i]*arr[j]==p)
            return true;
        else if(arr[i]*arr[j]<p)
            i++;
        else j--;
    }
    return false;
}

int main(void)
{
    scanf("%d %d",&nr,&k);
    for(int i=1;i<=nr;i++)
        scanf("%d",&arr[i]);
    sort(arr+1,arr+nr+1);
    printf("%d\n ",Two_Pointers_Prod(arr,k,nr));
}
