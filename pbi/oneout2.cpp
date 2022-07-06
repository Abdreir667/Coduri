#include <stdio.h>
#include <vector>

using namespace std;

FILE *in = fopen("oneout.in", "r");
FILE *out = fopen("oneout.out", "w");

bool liber_patrate[1000001] = {0};
int cerinta, nr, numar, nre = 0, maxi = 0, lung_max = 0, secv_maxime = 0;
vector<int> numere;
vector<pair<int, int>> secventa;

void ciur_liber(int max)
{
    for (int i = 2; i * i <= max; i++)
        for (int j = i * i; j <= max; j += i * i)
            liber_patrate[j] = 1;
}

int main(void)
{
    fscanf(in, "%d %d", &cerinta, &nr);
    switch (cerinta)
    {
    case 1:
    {
        for (int i = 1; i <= nr; i++)
        {
            fscanf(in, "%d", &numar);
            numere.push_back(numar);
            maxi = max(maxi, numar);
        }
        ciur_liber(maxi + 1);
        for (auto x : numere)
            if (liber_patrate[x] == 0)
                nre++;
        fprintf(out, "%d\n", nre);
        break;
    }
    case 2:
    {
        for (int i = 1; i <= nr; i++)
        {
            fscanf(in, "%d", &numar);
            numere.push_back(numar);
            maxi = max(maxi, numar);
        }
        numere.resize(nr);
        ciur_liber(maxi + 1);
        for (int i = 0; i < nr; i++)
        {
            if (liber_patrate[numere[i]] == 0)
                numere[i] = 1;
            else
                numere[i] = 0;
        }
        int start = 0, sfarsit;
        for (int i = 0; i < nr; i++)
        {
            if (numere[i] == 1)
            {
                int temp = i;
                while (numere[temp] == 1)
                    temp++;
                secventa.push_back(make_pair(i + 1, temp));
                i = temp;
            }
        }
        int lung;
        for (int i = 0; i < secventa.size() - 1; i++)
        {
            if (secventa[i + 1].first - secventa[i].second == 2)
            {
                lung = secventa[i + 1].second - secventa[i].first;
                if (lung > lung_max)
                {
                    secv_maxime = 1;
                    lung_max = lung;
                }
                else if (lung == lung_max)
                    secv_maxime++;
            }
        }
        fprintf(out, "%d %d\n", lung_max, secv_maxime);
        for (int i = 0, j = 1; i < secventa.size() && j <= secv_maxime; i++)
        {
            if (secventa[i + 1].second - secventa[i].first == lung_max)
            {
                fprintf(out, "%d %d\n", secventa[i].first, secventa[i + 1].second);
                j++;
            }
        }
        break;
    }
    }
}