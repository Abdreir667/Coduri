#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("elimminmax.in");
ofstream cout("elimminmax.out");

int mat[101][101],linii,coloane,maxi=0,mini=2147483647;
int x1,x2,y1,y2;

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            cin>>mat[i][j];
            cin>>mat[i][j];
            if(mat[i][j]>maxi)
                maxi=mat[i][j];
            if(mini>mat[i][j])
                mini=mat[i][j];
        }
    for(int i=linii;i>=coloane;i--)
        for(int j=1;j<=coloane;j++)
        {
            if(mat[i][j]==maxi)
            {
                
            }
        }
    
}