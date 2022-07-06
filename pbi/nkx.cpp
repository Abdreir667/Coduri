#include <iostream>

using namespace std;

short  n,k;
short  mat[102][102];

int main(void)
{
    cin>>n>>k;
    for(short i=1;i<=n;i++)
        for(short j=1;j<=n;j++)
            mat[i][j]=2;
    for(short j=1;j<=n;j++)
        for(short i=0;i<=k;i++)
            mat[j][j+i]=mat[j+i][j]=1;
    for(int j=0;j<=k;j++)
        for(short i=0;i<=n;i++)
            mat[i][n-i+1+j]=mat[i][n-i+1-j]=1;
    for(short i=1;i<=n;i++,cout<<"\n")
        for(short j=1;j<=n;j++)
            cout<<mat[i][j]<<" ";
    
}