#include <iostream>

using namespace std;

int mat[101][101],n,m;
long long s=0;

int main(void)
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]%2==0)
                s+=mat[i][j];
        }
    }
    cout<<s<<endl;

}