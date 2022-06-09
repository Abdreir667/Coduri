#include <fstream>
#include <bitset>

using namespace std;

ifstream cin("fadema.in");
ofstream cout("fadema.out");

int linii,coloane;
bitset<2000> mat[1001];
short lg[1001][1001],h=0;
long long maxi=0;
bool nr;

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
    {
        cin>>nr;
        mat[i][1]=nr;
        short maxi=0,lung=1;
        for(int j=2;j<=coloane;j++)
        {
            cin>>nr;
            mat[i][j]=nr;
            if(nr!=mat[i][j-1])
                lung++;
            if(lung+1>=maxi && nr==mat[i][j-1])
            {
                maxi=lung+1;
                lg[i][j]=lung+1;
                lung=1;
            }
        }
        cout<<maxi<<" ";
    }
    int maxim=0;
    for(int i=1;i<=linii;i++)
    {
        int lung_max=0,h=0;
        for(int j=1;j<=coloane;j++)
        {
            if(mat[i][j]!=mat[i+1][j])
            {
                h++;
                lung_max=min(lg[i][j],lg[i+1][j]);
            }
            if(lung_max*h>maxim)
                maxim=lung_max*h
        }
    }
    cout<<maxim<<endl;

}
