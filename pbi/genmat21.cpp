#include <iostream>

using namespace std;

int n,mat[100][100];

int main(void)
{
    cin>>n;
    for(int j=0;j<=n;j++)
        for(short i=0;i<=n;i++)
            mat[i][n-i+1+j]=mat[i][n-i+1-j]=n-j;
    for(int i=1;i<=n;i++,cout<<"\n")
        for(int j=1;j<=n;j++)
            cout<<mat[i][j]<<" "; 
}