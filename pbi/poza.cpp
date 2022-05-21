#include <iostream>

using namespace std;

short n, m, pl=-1, ul, pc=102, uc, i, j;
    bool a[101][101];

int main()
{
    cin>>n>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                if(pl==-1)
                    pl=i;
                else
                    ul=i;
                if(j<pc)
                    pc=j;
                else if(j>uc)
                    uc=j;

            }
        }
    cout<<ul-pl+1<<" "<<uc-pc+1<<endl;
    for(i=pl; i<=ul; i++)
    {
        for(j=pc; j<=uc; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}