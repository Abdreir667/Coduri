#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int n, nr, cap1, cap2, temp;
vector<int> aparitii(10, 0);
vector<int> numere;
vector<int> numarecu2;

void utilizare(int n)
{
    int ult_cifra;
    while (n)
    {
        ult_cifra = n % 10;
        aparitii[ult_cifra]++;
        n /= 10;
    }
}

void quicksort(vector<int> &arr, vector<int> &arr2, int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(arr[m], arr[st]);
        swap(arr2[m], arr2[st]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                swap(arr2[i], arr2[j]);
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        quicksort(arr, arr2, st, i - 1);
        quicksort(arr, arr2, i + 1, dr);
    }
}

bool different_check(int n)
{
    int lungime = 0;
    int aux = n;
    unordered_set<int> s;
    while (n)
    {
        int nr = n % 10;
        s.insert(nr);
        lungime++;
        n /= 10;
    }
    if (s.size() == 2)
        return true;
    else
        return false;
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nr;
        utilizare(nr);
        if (different_check(nr) == true)
            numarecu2.push_back(nr);
    }
    for (int i = 0; i < 10; i++)
        numere.push_back(i);
    quicksort(aparitii, numere, 0, 9);
    //sort(aparitii.begin(), aparitii.end());
    for (auto i = 0; i < 9; i++)
    {
        if (aparitii[i] == aparitii[i + 1])
        {
            temp = i;
            while (aparitii[temp] == aparitii[temp + 1])
            {
                cap1 = i;
                temp++;
            }
        }
        // cout<<i<<" "<<temp<<endl;
        if (temp - i + 1 > 1)
            sort(numere.begin() + i, numere.begin() + temp + 1, greater<int>());
        i = temp;
    }
    cout << numere.back() << endl;
    for (auto x : numere)
        cout << x << " ";
    cout << endl;
    
    for (auto x : numarecu2)
        cout << x << " ";
}
