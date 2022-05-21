#include <fstream>

using namespace std;

ifstream cin("fibo.in");
ofstream cout("fibo.out");

long long fibo(int n)
{
    long long f;
    if(n<=2)
        f=1;
    else f=fibo(n-1)+fibo(n-2);
    return f;
}
//nici nu poate calcula al 100-lea termen
int main(void)
{
    int n;
    cin>>n;
    cout<<fibo(n);
}
