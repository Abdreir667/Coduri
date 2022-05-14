#include <iostream>
using namespace std;

long long mat[102][102]={2},linii,coloane,nrb=0;

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
            cin>>mat[i][j];
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
            if((mat[i-1][j]%2==0 && mat[i+1][j]%2==0) && (mat[i][j-1]%2==0 && mat[i][j+1]%2==0))
                nrb++;
    cout<<nrb;
}