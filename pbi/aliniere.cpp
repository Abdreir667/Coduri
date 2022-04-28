#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("aliniere.in");
ofstream cout("aliniere.out");

int n, height, temp1 = 0, temp2 = 0;
char gen;

struct pereche
{
    int pozitie;
    int inaltime;
} baieti[101];

void quicksort(pereche v[], int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(v[m], v[st]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (v[i].inaltime < v[j].inaltime)
            {
                swap(v[i], v[j]);
                d = 1 - d;
            }
            else if (v[i].inaltime == v[j].inaltime && v[i].pozitie > v[j].pozitie)
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

struct pereche1
{
    int pozitie;
    int inaltime;
} fete[101];

void quicksort1(pereche1 fete[], int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(fete[m], fete[st]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (fete[i].inaltime < fete[j].inaltime)
            {
                swap(fete[i], fete[j]);
                d = 1 - d;
            }
            else if (fete[i].inaltime == fete[j].inaltime && fete[i].pozitie > fete[j].pozitie)
            {
                swap(fete[i], fete[j]);
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        quicksort1(fete, st, i - 1);
        quicksort1(fete, i + 1, dr);
    }
}

int main(void)
{
    cin >> n;
    temp1 = 0, temp2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> gen >> height;
        switch (gen)
        {
        case 'B':
        {
            baieti[++temp1].inaltime = height;
            baieti[temp1].pozitie = i;
        }
        break;
        case 'F':
        {
            fete[++temp2].inaltime = height;
            fete[temp2].pozitie = i;
        }
        break;
        }
    }
    quicksort(baieti, 1, temp1);
    for (int i = 1; i <= temp1; i++)
        cout << baieti[i].pozitie << " ";
    quicksort1(fete, 1, temp2);
    for (int i = 1; i <= temp2; i++)
        cout << fete[i].pozitie << " ";
}