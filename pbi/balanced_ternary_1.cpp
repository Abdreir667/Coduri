#include <stdio.h>

using namespace std;
 
int n,arr[1001],k=0;

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
    for(int i=k;i>=1;i--)
        printf("%d",arr[i]);
    printf("\n");
    for(int i=k;i>=1;i--)
    {
        if(arr[i]==0 || arr[i]==1)
            printf("%d",arr[i]);
        if(arr[i]==2)
        {
            printf("T");
            arr[i-1]++;
        }
        if(arr[i]==3)
        {
            printf("0");
            if(i==1)
                ultimul=true;
            arr[i-1]++;
        }
    }
    if(ultimul==true)
        printf("%d",arr[0]);
        
}