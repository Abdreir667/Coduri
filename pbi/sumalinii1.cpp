#include <iostream>
#include <vector>

using namespace std;

int mat[101][101],maxi=0,n,m;
vector<int> suma;

int main(void)
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int s=0;
        maxi=0;
        for(int j=1;j<=m;j++)
        {
            cin>>mat[i][j];
            s+=mat[i][j];
            maxi=max(maxi,mat[i][j]);
        }
        s-=maxi;
        suma.push_back(s);
    }
    for(auto x:suma)
        cout<<x<<" ";
}