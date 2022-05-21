#include <iostream>
#include <vector>

using namespace std;
vector<bool> este0(100001,0);
short linii,coloane,j,i;
int mat[101][101];

int main(void)
{
    cin>>linii>>coloane;
    for(i=0;i<linii;i++)
        for(j=0;j<coloane;j++)
            cin>>mat[i][j];
    for(j=0;j<coloane;j++)
        for(i=0;i<linii;i++)
            if(mat[i][j]==0)    
                este0[j]=1;
    cout<<endl;
    for(i=0;i<linii;i++)
    {
        for(j=0;j<coloane;j++)
            if(este0[j]==0)
                cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}