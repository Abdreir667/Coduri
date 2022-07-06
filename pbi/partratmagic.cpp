#include <stdio.h>
#include <iostream>

using namespace std;

int mat[101][101]={0},n;

int main(void)
{
    scanf("%d",&n);
    int numar=1;
    for(int i=n;i>=1;i--)
        for(int j=n;j>=1;j--)
        {
            mat[i][j]=numar;
            numar++;
        }
    for(int i=1;i<=n/4;i++)
        for(int j=n/4+1;j<=n-n/4;j++)
            swap(mat[i][j],mat[n-i+1][n-j+1]);
    for(int i=1;i<=n/4;i++)
        for(int j=n/4+1;j<=n-n/4;j++)
        swap(mat[j][i],mat[n-j+1][n-i+1]);
    for(int i=1;i<=n;i++,printf("\n"))
        for(int j=1;j<=n;j++)
            printf("%d ",mat[i][j]);
}
