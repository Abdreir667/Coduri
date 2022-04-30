#include <fstream>
#include <vector>
#include <set>

using namespace std;

ifstream cin("ordsume.in");
ofstream cout("ordsume.out");

long long n, nr;

int main(void)
{
    vector<long long> numere;
    set<long long> suma;
    cin >> n;
    if (n == 1)
    {
        cin >> nr;
        cout << nr;
    }
    else
    {
        for (long long i = 1; i <= n; i++)
        {
            cin >> nr;
            numere.push_back(nr);
        }
        for (int i = 0; i < numere.size() - 1; i++)
            for (int j = i + 1; j < numere.size(); j++)
                if (numere[i] != numere[j])
                    suma.insert(numere[i] + numere[j]);
        for (auto x : suma)
            cout << x << " ";
    }
}