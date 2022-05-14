#include <fstream>
#include <vector>

using namespace std;

ifstream cin("cufar.in");
ofstream cout("cufar.out");

int n, k, c, nr;
vector<int> numar(1000000);
vector<int> nr_div(1000000, 0);
vector<bool> divizori_primi(1000000, 0);
long long cifru = 0;

int ciurul_lui_eratostene(int n, int k)
{
    int nrd = 1, afisare;
    for (int i = 2; i <= n && nrd <= k; i++)
        if (divizori_primi[i] == 0)
        {
            if (n % i == 0)
            {
                nrd++;
                afisare = i;
            }
            for (int j = 2; j <= 1000000 / i; j++)
                divizori_primi[i * j] = 1;
        }
    return afisare;
}

void ciur_cerinta_2(void)
{
    for (int i = 2; i <= 1000000; i++)
        if (nr_div[i] == 0)
            for (int j = 1; j <= 1000000 / i; j++)
            {
                nr_div[i * j]++;
                if (nr_div[i * j] == numar[i * j])
                    cifru += i;
            }
}

int main(void)
{
    cin >> c;
    switch (c)
    {
    case 1:
    {
        cin >> n >> nr >> k;
        cout << ciurul_lui_eratostene(nr, k);
    }
    break;
    case 2:
    {
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cin >> nr >> k;
            cout << ciurul_lui_eratostene(nr, k);
        }
        break;
        default:
        {
            for (int i = 1; i <= n; i++)
            {
                cin >> nr >> k;
                numar[nr] = k;
            }
            ciur_cerinta_2();
            cout << cifru << " ";
        }
        break;
        }
    }
    break;
    }
}