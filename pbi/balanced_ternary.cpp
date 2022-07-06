#include <stdio.h>
#include <cmath>

using namespace std;
 
int n,k=0;
short arr[10000000];

void unbalanced_ternary(int nr)
{
    while(nr)
    {
        arr[++k]=nr%3;
        nr/=3;
    }
}


int main(void)
{
    scanf("%d",&n);
    bool ultimul=false;
    unbalanced_ternary(n);
    for(int i=1;i<=k;i++)
    {
        if(arr[i]==2)
        {
            arr[i]=-1;
            arr[i+1]++;
        }
        if(arr[i]==3)
        {
            arr[i]=0;
            if(i==k)
            {
                ultimul=true;
            }
            arr[i+1]+=1;
        }
    }
    if(ultimul==true)
        printf("1");
    for(int i=k;i>=1;i--)
    {
        if(arr[i]!=-1)
            printf("%d",arr[i]);
        else printf("T");
    }
}