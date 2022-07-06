#include <stdio.h>

using namespace std;

int n,nr_chenare;
int mat[51][51];

void generare_chenar(int grad)
{
    for(int i=grad;i<=n-grad+1;i++)
        mat[i][grad]=grad;
    for(int i=grad;i<=n-grad+1;i++)
        mat[grad][i]=grad;
    for(int i=grad;i<=n-grad+1;i++)
        mat[n-grad+1][i]=grad;
    for(int i=grad;i<=n-grad+1;i++)
        mat[i][n-grad+1]=grad;
}

int main(void)
{
    scanf("%d",&n);
    if(n%2==0)
        nr_chenare=n/2;
    else nr_chenare=n/2+1;
    for(int i=1;i<=nr_chenare;i++)
        generare_chenar(i);
    for(int i=1;i<=n;i++,printf("\n"))
        for(int j=1;j<=n;j++)
            printf("%d ",mat[i][j]);
}