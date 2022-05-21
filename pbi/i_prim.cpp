#include <iostream>

using namespace std;

int n;

bool is_prime(long long n) // verificarea daca numarul dat ca parametru este prim sau nu
{
    bool ok;
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

long long i_prim(long long n)
{
    long long val1=0,val2=0;
    if(is_prime(n)==true)
        return 0;
    else
    {
        for(long long j=n-1;j>=1;j--)
        {
            if(is_prime(j)==true)
            {
                val1=j;
                break;
            }
        }
        for(long long j=n+1;j<=10000;j++)
        {
            if(is_prime(j)==true)
            {
                val2=j;
                break;
            }
        }
        return val2-val1;
    }

}

int main(void)
{
    cin>>n;
    cout<<i_prim(n);
}