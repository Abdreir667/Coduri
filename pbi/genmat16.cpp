#include <stdio.h>
#include <vector>

using namespace std;

int n;
int nr;
short mat[25][25];

int main(void)
{
    scanf("%d",&n);
    short a=1,b=1,c=2;
    int k=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            mat[i][j]=a%10;
            a=b%10;
            b=c%10;
            c=(a+b)%10;
        }
    for(int i=1;i<=n;i++,printf("\n"))
        for(int j=1;j<=n;j++)  
            printf("%d ",mat[i][j]);
}