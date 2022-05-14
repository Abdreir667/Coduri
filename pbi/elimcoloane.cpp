#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<short> este0;
short linii,coloane;
int mat[101][101];

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==0)
                este0.push_back(j);
        }
    sort(este0.begin(),este0.end());
    for(int i=1;i<=linii;i++)
    {
        
    }
}