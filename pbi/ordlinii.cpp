#include <iostream>
#include <algorithm>

using namespace std;
int a[100][100], x[10000], dim_tablou=0, m, i, j, afis,n;
char c;
int main()
{
    cin>>n>>m>>c;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
            x[++dim_tablou]=a[i][j];
        }
    if(c=='+')
        sort(x+1, x+dim_tablou+1);
    else if(c=='-')
        sort(x+1, x+dim_tablou+1, greater<int>());
    afis=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            a[i][j]=x[++afis];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}