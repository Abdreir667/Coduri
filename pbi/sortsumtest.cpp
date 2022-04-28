#include <fstream>
#include <vector>

using namespace std;

ifstream cin("sortsum.in");
ofstream cout("sortsum.out");

int n = 0;

struct pereche
{
    int numar;
    int suma;
} numere[100000];

int sumac(int n)
{
    int s = 0;
    while (n != 0)
    {
        s = s + n % 10;
        n /= 10;
    }
    return s;
}

void quicksort(pereche arr[], int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(arr[m], arr[st]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (arr[i].suma > arr[j].suma)
            {
                swap(arr[i], arr[j]);
                d = 1 - d;
            }
            else if (arr[i].suma == arr[j].suma && arr[i].numar < arr[j].numar)
            {
                swap(arr[i], arr[j]);
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        quicksort(arr, st, i - 1);
        quicksort(arr, i + 1, dr);
    }
}

int main(void)
{
    while (cin >> numere[++n].numar)
        numere[n].suma = sumac(numere[n].numar);
    n--;
    quicksort(numere, 1, n);
    for (int i = 1; i <= n; i++)
        cout << numere[i].numar << " ";
}
