#include <stdio.h>

using namespace std;

short mat[1001][1001],linii;
long long s;

int main(void)
{
    FILE *cin = fopen("matprod.in","r");
    FILE *cout = fopen("matprod.out","w");
    fscanf(cin,"%d",&linii);
    for(int i=0;i<linii;i++)
        for(int j=0;j<linii;j++)
            fscanf(cin,"%d",&mat[i][j]); 
    for(int i=0;i<linii*linii;i++)
    {
        s=0;
        for(int j=0;j<i%linii;j++)
        {
            for(int k=0;k<linii;k++)

        }
    }
}