#include <fstream>
#include <set>

using namespace std;

ifstream cin("divigrup.in");
ofstream cout("divigrup.out");

int nr, n;
set<int> divigrup;
struct pereche
{
    int valoare;
    int numar_divizori;
} p[201];

int apar[2001] = {0};

int nrd(int n)
{
    int nrd = 1, d = 2;
    while (n > 1)
    {
        if (n % d == 0)
        {
            int p = 0;
            while (n % d == 0)
            {
                p++;
                n /= d;
            }
            nrd *= (p + 1);
        }
        d++;
        if (d * d > n)
            d = n;
    }
    return nrd;
}

void quicksort(pereche v[], int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(v[st], v[m]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (v[i].numar_divizori < v[j].numar_divizori)
            {
                swap(v[i], v[j]);
                d = 1 - d;
            }
            else if (v[i].numar_divizori == v[j].numar_divizori && v[i].valoare > v[j].valoare)
            {
                swap(v[i], v[j]);
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        quicksort(v, st, i - 1);
        quicksort(v, i + 1, dr);
    }
}

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i].valoare;
        int x = nrd(p[i].valoare);
        p[i].numar_divizori = x;
        apar[x]++;
        divigrup.insert(x);
    }
    quicksort(p, 1, n);
    cout << divigrup.size() << endl;
    cout << apar[p[1].numar_divizori] << " " << p[1].valoare << " ";
    for (int i = 2; i <= n; i++)
        if (p[i - 1].numar_divizori == p[i].numar_divizori)
            cout << p[i].valoare << " ";
        else
            cout << endl << apar[p[i].numar_divizori] << " " << p[i].valoare << " ";
}