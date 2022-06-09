#include <iostream>

using namespace std;

int mat[601][601],linii,coloane,nre=0;

bool is_prime(int n) // verificarea daca numarul dat ca parametru este prim sau nu
{
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

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
            cin>>mat[i][j];
    for(int j=1;j<=coloane;j++)
    {
        if(j%2==1)
            for(int i=1;i<=linii;i++)
                if(is_prime(mat[i][j])==true)
                    nre++;
    }
    cout<<nre;
}