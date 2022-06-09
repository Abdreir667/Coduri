#include <fstream>
#include <iomanip>

using namespace std;

ifstream cin("matrice.in");
ofstream cout("matrice.out");

int mat[51][51], linii,pow10,st,dr;
int tab[6];

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool is_superprime(int n)
{
    pow10=1;
    int dim=0;
    int nr=n;
    if(n<10)
        return is_prime(n);
    if(is_prime(n)==true)
        return true;
    while(nr>0)
    {
        tab[++dim]=nr%10;
        nr=nr/10;
    }
    if(dim==2)
        return is_prime(tab[1]*10+tab[2]);
    else
    {
        st=1;
        dr=dim;
        while(st<=dr)
        {
            swap(tab[st],tab[dr]);
            st++;
            dr--;
        }
        for(int c=1; c<dim; c++)
            pow10=pow10*10;
        for(int c=1; c<dim; c++)
        {
            int prima=tab[1];
            for(int k=1; k<dim; k++)
                tab[k]=tab[k+1];
            tab[dim]=prima;
            nr=0;
            for(int k=1; k<=dim; k++)
            {
                nr=nr+tab[k]*pow10;
                pow10=pow10/10;
            }
            if(is_prime(nr)==true)
                return true;
        }
    }
    return false;
}

int main(void)
{
    cin >> linii;
    for (int i = 1; i <= linii; i++)
        for (int j = 1; j <= linii; j++)
            cin >> mat[i][j];
    for (int i = 1; i <= linii; i++)
        for (int j = 1; j <= linii; j++)
        {
            if (i < j && i + j < linii + 1)
                swap(mat[i][j], mat[linii - i + 1][j]);
            else if (i > j && i + j < linii + 1)
                if (is_superprime(mat[i][j]) == true && is_superprime(mat[i][linii - j + 1]) == true)
                    swap(mat[i][j], mat[i][linii - j + 1]);
        }
    for (int i = 1; i <= linii; i++)
    {
        for (int j = 1; j <= linii; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}
