#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("halfsort3.in");
ofstream cout("halfsort3.out");

int n, nr, temp = 0, temp1 = 0;

int main(void)
{
    cin >> n;
    vector<bool> numere;
    vector<int> pare;
    vector<int> impare;
    for (int i = 1; i <= n; i++)
    {
        cin >> nr;
        if (nr < 0)
        {
            numere.push_back(0);
            pare.push_back(nr);
        }
        else if (nr > 0)
        {
            numere.push_back(1);
            impare.push_back(nr);
        }
    }
    sort(pare.begin(), pare.end());
    sort(impare.begin(), impare.end(), greater<int>());
    for (int i = 0; i < numere.size(); i++)
    {
        if (numere[i] == 0)
            cout << pare[temp++] << " ";
        else
            cout << impare[temp1++] << " ";
    }
}