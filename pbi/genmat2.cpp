#include <iostream>

using namespace std;

int mat[25][25],n;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        mat[i][i]=0;
    for(int i=1,k=0;i<=n;i++,k++)
        for(int j=1;j<=n;j++)
        {
            if(mat[j][i]!=0)
                mat[j][i]=n-k;
        }
    for(int i=1;i<=n;i++,cout<<"\n")
        for(int j=1;j<=n;j++)
            cout<<mat[i][j]<<" ";
}