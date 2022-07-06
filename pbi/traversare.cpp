#include <fstream>

using namespace std;

ifstream cin("traversare.in");
ofstream cout("traversare.out");

bool mat[1001][1001];
int k=0;
short pasi[1001][1001]={0};
short linii,coloane;

struct pozitii{
    short linie,coloana;
}p[1001];

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            cin>>mat[i][j];
            if(i==1 && mat[i][j]==0)
                p[++k].linie=i,p[k].coloana=j;
        }
    for(int i=1;i<=k;i++)
    {
        int pas=0;
        pasi[p[i].linie][p[i].coloana]=1;
        for(int j=1;j<=linii;j++)
        {
            if(pasi[p[i].linie+1][p[i].coloana]!=1 && pasi[p[i].linie+1][p[i].coloana]==0)
                p[i].linie++;
            else
            { p[i].coloana--,j--;}
            pas++;
        }
        cout<<pas<<" ";
        mat[p[i].linie][p[i].coloana]=pas;
    }
    
}