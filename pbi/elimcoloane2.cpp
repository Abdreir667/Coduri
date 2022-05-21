#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[101][101], n, m, i, j, l, c;
    cin>>n>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin>>a[i][j];
    for(j=m;j>=1;j--)
        for(i=1; i<=n; i++)
            if(a[i][j]==0)
            {
                for(c=j; c<=m; c++)
                    for(l=1; l<=n; l++)
                        a[l][c]=a[l][c+1];
                m--;
            }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            if(a[i][j]!=0)
                cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}