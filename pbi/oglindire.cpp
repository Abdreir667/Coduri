#include <stdio.h>
#include <vector>

using namespace std;

int linii,coloane;
int mat[101][101];
vector<int> de_inversat;

bool is_prime(short n)
{
    bool ok;
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (short i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void inversare(int lin)
{
    for(int o=1,p=0;o<=coloane/2;o++,p++)
        swap(mat[lin][o],mat[lin][coloane-p]);
}

int main(void)
{
    scanf("%d %d",&linii,&coloane);
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=coloane;j++)
        {
            scanf("%d",&mat[i][j]);
            if(j==1 && is_prime(mat[i][j])==true)
                de_inversat.push_back(i);
        }
    }
    for(auto x:de_inversat)
        inversare(x);
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=coloane;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}