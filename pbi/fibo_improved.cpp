#include <fstream>
#include <vector>

using namespace std;

ifstream cin("fibo.in");
ofstream cout("fibo.out");

using namespace std;

vector<long long> fib(100000);
int nr;

long long fibo(int n)
{
    long long f;
    for(int i=1;i<=n;i++)
    {
        if(i<=2)
            f=1;
        else f=fib[i-1]+fib[i-2];
        fib[i]=f;
    }
    return fib[n];
}

int main(void)
{
    cin>>nr;
    cout<<fibo(nr);
}