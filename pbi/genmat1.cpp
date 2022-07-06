#include <stdio.h>
#include <iostream>

using namespace std;

short mat[21][21];
short linii,coloane;

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            mat[i][j]=min(i,j);
        }
    for(int i=1;i<=linii;i++,cout<<"\n")
        for(int j=1;j<=coloane;j++)
            cout<<mat[i][j]<<" ";
}