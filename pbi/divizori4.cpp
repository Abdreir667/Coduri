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
vector<int> numere_divizori;
vector<int>::iterator it;

int nrd(int n)
{
    int nrd = 0;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
            if (n / i == i)
                nrd++;
            else
                nrd += 2;
    return nrd;
}

int main(void)
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> nr;
        numere.push_back(nr);
        divizori.push_back(nrd(nr));
    }
    numere.push_back(-100);
    cin >> poz;
    divizori_context = divizori[poz - 1];
    numere_divizori.push_back(numere[poz - 1]);
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
                    numere_divizori.push_back(numere[it - divizori.begin()]);
                    numere[it - numere.begin()] = -1;
                }
                else
                    break;
            }
            sort(numere_divizori.begin(), numere_divizori.end(), greater<int>());
            for (auto x : numere_divizori)
                cout << x << " ";
        }
    }
}