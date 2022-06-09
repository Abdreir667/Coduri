#include <fstream>

using namespace std;

ifstream cin("robot1.in");
ofstream cout("robot1.out");

int mat[101][101],n,m,l,c;
char mutari[5001];
long long energie;

int main(void)
{
    cin>>n>>m>>l>>c;
    for(int i=1;i<=m;i++)
        cin>>mutari[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>mat[i][j];
    energie=mat[l][c];
    int linii=l,coloane=c;
    for(int i=1;i<=m;i++)
    {
        switch(mutari[i])
        {
            case 'S':
            {
                energie--;
                linii++;
                energie+=mat[linii][coloane];
                break;
            }
            case 'E':
            {
                energie--;
                coloane++;
                energie+=mat[linii][coloane];
                break;
            }
            case 'N':
            {
                energie--;
                linii--;
                energie+=mat[linii][coloane];
                break;
            }
            case 'V':
            {
                energie--;
                coloane--;
                energie+=mat[linii][coloane];
                break;
            }
        }
        if(energie==0)
                break;
    }
    cout<<linii<<" "<<coloane<<endl;
}