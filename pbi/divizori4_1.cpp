#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("divizori4.in");
ofstream cout("divizori4.out");

int n, nr, poz, c, divizori_context, nrdiv = 0, temp = 0;

vector<int> numere;
vector<int> divizori;
vector<int> numar_divizori(10000,0);
vector<int>::iterator it;

void nr_div(void)
{
    for(int i=1;i<=1000000;i++)
        for(int j=1;j*i<=1000000;j++)
            numar_divizori[i*j]++;
}

int main(void)
{
    cin >> n >> c;
    nr_div();
    for (int i = 1; i <= n; i++)
    {
        cin >> nr;
        numere.push_back(nr);
    }
    numere.push_back(-100);
    cin >> poz;
    divizori_context = divizori[poz - 1];
    numar_divizori.push_back(numere[poz - 1]);
    divizori[poz - 1] = -1;
    switch (c)
    {
        case 1:
            cout << divizori_context;
            break;
        case 2:
        {
            for (int i = 1; i <= n; i++)
            {
                it = find(divizori.begin(), divizori.end(), divizori_context);
                if (numere[it - divizori.begin()] != numere.back())
                {
                    numar_divizori.push_back(numere[it - divizori.begin()]);
                    numere[it - numere.begin()] = -1;
                }
                else
                    break;
            }
            sort(numar_divizori.begin(), numar_divizori.end(), greater<int>());
            for (auto x : numar_divizori)
                cout << x << " ";
        }
    }
}