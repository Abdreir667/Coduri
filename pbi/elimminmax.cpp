#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int mat[101][101],linii,coloane,maxi=0,mini=2147483647;
int x1,x2,y3,y2;

void eliminare_linie(int x)
{
    for(int i=x;i<linii;i++)
        for(int j=1;j<=coloane;j++)
            mat[i][j]=mat[i+1][j];
    linii--;
}

void eliminare_coloane(int y)
{
    for(int j=y;j<coloane;j++)
        for(int i=1;i<=coloane;i++)
            mat[i][j]=mat[i][j+1];
    coloane--;
}

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]>maxi)
            {
                maxi=mat[i][j];
                x1=i;
                y3=j;
            }
            if(mini>mat[i][j])
            {
                mini=mat[i][j];
                x2=i;
                y2=j;
            }
        }
    if(x1==x2)
        eliminare_linie(x1);
    else
    {
        if(x1<x2))
    }
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=coloane;j++)
            cout<<mat[i][j]<<" ";    
        cout<<endl;
    }
}