#include <stdio.h>

using namespace std;

int mat[101][101],linii,coloane,k=0,maxi=0,k_last=0;
int minim[101];
bool gasit=false;
struct coord{
    short lin,col;
}p[101];

int main(void)
{
    scanf("%d %d",&linii,&coloane);
    for(int i=1;i<=linii;i++)
    {
        int mini=100000000;
        for(int j=1;j<=coloane;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mini==mat[i][j])
            {
                mini=mat[i][j];
                p[++k].lin=i;
                p[k].col=j;
            }
            else if(mini<mat[i][j] && gasit==false)
            {
                k=0;
                p[++k].lin=i;
                p[k].col=j;
                gasit=true;
            }
            if(mini<mat[i][j] && gasit==true)
            {
                k=k_last;
                p[++k].lin=i;
                p[k].col=j;
            }
        }
        minim[i]=mini;
        k_last=k;
    }
    for(int i=1;i<=k;i++)
        mat[p[i].lin][p[i].col]=minim[p[i].lin];
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=coloane;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}