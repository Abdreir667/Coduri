#include <fstream>
#include <vector>

using namespace std;

ifstream cin("matrice.in");
ofstream cout("matrice.out");

int n,m,mat[101][101],k=0,s;
vector<int> sum;

int main(void)
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        s=0;
        for(int j=1;j<=m;j++)
        {
            cin>>mat[i][j];
            s+=mat[i][j];
        }
        sum.push_back(s);
    }
    for(auto x:sum)
        cout<<x<<" ";
    return 0;
}