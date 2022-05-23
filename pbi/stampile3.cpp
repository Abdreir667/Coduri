#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> numere_2;
int n, nr;
set<short> stampile;

struct stampila
{
    short valoare;
    short nr_utilizari = 0;
} p[10];

void quicksort(stampila v[], int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(v[m], v[st]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (v[i].nr_utilizari < v[j].nr_utilizari)
            {
                swap(v[i], v[j]);
                d = 1 - d;
            }
            else if (v[i].nr_utilizari == v[j].nr_utilizari && v[i].valoare < v[j].valoare)
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

void descompunere(int nr)
{
    stampile.clear();
    int temp = nr;
    while (temp)
    {
        p[temp % 10].nr_utilizari++;
        stampile.insert(temp % 10);
        temp /= 10;
    }
    if (stampile.size() == 2)
        numere_2.push_back(nr);
}

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> nr;
        descompunere(nr);
    }
    for (int i = 0; i <= 9; i++)
        p[i].valoare = i;
    quicksort(p, 0, 9);
    cout << p[9].valoare << endl;
    for (int i = 0; i <= 9; i++)
        cout << p[i].valoare << " ";
    cout << endl;
    if (numere_2.size() > 0)
    {
        sort(numere_2.begin(), numere_2.end());
        for (auto x : numere_2)
            cout << x << " ";
    }
    else
        cout << "-1";
}