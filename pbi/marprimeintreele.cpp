#include <fstream>

using namespace std;

ifstream cin("maxprimeintreele.in");
ofstream cout("maxprimeintreele.out");

double n;
double maxi = 0;
long long afisare;

long phi(long x)
{
    long i, rank = x;
    if (x == 1)
        return 0;
    if (x % 2 == 0)
    {
        rank -= rank / 2;
        while (x % 2 == 0)
            x /= 2;
    }
    for (i = 3; i * i <= x; i += 2)
        if (x % i == 0)
        {
            rank -= rank / i;
            while (x % i == 0)
                x /= i;
        }
    if (x > 1)
        rank -= rank / x;
    return rank;
}

int main(void)
{
    while (cin >> n)
    {
        // cout<<n/phi(n)<<endl;
        if (n / phi(n) > maxi)
        {
            maxi = n / phi(n);
            afisare = n;
            // cout<<maxi<<" ";
        }
    }
    cout << afisare << " ";
}
