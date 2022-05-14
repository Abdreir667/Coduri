#include <iostream>

using namespace std;

int mat[101][101],linii,coloane,nr,verzi=0;

bool is_prime(int n)
{
    bool ok=true;
    if(n<2)
        ok=false;
    else for(int i=2;i*i<=n;i++)
            if(n%i==0)
            {
                ok=false;
                break;
            }
    return ok;
}

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            cin>>mat[i][j];
        }
    for(int i=1;i<=linii;i++)
    {
        if(is_prime(mat[i][1])==false)
        {
            for(int j=1;j<=coloane;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
}