#include <fstream>
#include <iomanip>

using namespace std;

ifstream cin("matrice.in");
ofstream cout("matrice.out");

int mat[51][51], linii;
int tab[5];

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
    if (n < 10)
        return is_prime(n);
    if (is_prime(n) == true)
        return true;
    int k = 0, temp = 0;
    while (n)
    {
        tab[++k] = n % 10;
        n /= 10;
    }
    if (k == 2)
    {
        swap(tab[1], tab[2]);
        temp = 0;
        for (int j = 2; j >= 1; j--)
            temp = temp * 10 + tab[j];
        if (is_prime(temp) == true)
            return true;
    }
    else
        for (int i = 1; i < k; i++)
        {
            int prim = tab[1];
            for (int j = 1; j < k; j++)
                tab[j] = tab[j + 1];
            tab[k] = prim;
            temp = 0;
            for (int j = k; j >= 1; j--)
                temp = temp * 10 + tab[j];
            if (is_prime(temp) == true)
                return true;
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
