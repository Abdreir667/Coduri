#include <fstream>
#include <iomanip>

using namespace std;

ifstream cin("matrice.in");
ofstream cout("matrice.out");

short mat[51][51],linii;

int main(void)
{
    cin>>linii;
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=linii;j++)
        {
            cin>>mat[i][j];
            if(i+j==linii+1 || i==j)
                mat[i][j]=2;
            cout<<setw(3)<<mat[i][j];
        }
        cout<<endl;
    }
}

