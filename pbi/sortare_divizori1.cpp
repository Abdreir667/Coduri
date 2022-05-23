#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("sortare_divizori.in");
ofstream cout("sortare_divizori.out");

int n, nr;

struct pereche
{
    int valoare;
    int numar_divizori;
} p[1001];

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

int numar_divizori(int n)
{
    int nrd=1,d=2;
    while(n>1)
    {
        if(n%d==0)
        {
            int p=0;
            while(n%d==0)
            {
                p++;
                n/=d;
            }
            nrd*=(p+1);
        }
        d++;
        if(d*d>n)
            d=n; 
    }
    return nrd;
}

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i].valoare;
        p[i].numar_divizori = numar_divizori(p[i].valoare);
    }
    quicksort(p, 1, n);
    for (int i = 1; i <= n; i++)
        cout << p[i].valoare << " ";
}