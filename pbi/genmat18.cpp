#include <iostream>
#include <vector>

using namespace std;

int linii,mat[6][6],k=0,n;
vector<long long> fib(1000);

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
    cin>>n;
    for(int p=1;p<=n;p++)
    {
        if(p%2==1)
        {
            for(int i=1;i<=n;i++)
                mat[p][i]=fibo(++k);
        }
        else{
            for(int i=n;i>=1;i--)
                mat[p][i]=fibo(++k);
        }
    }
    for(int i=1;i<=n;i++,cout<<"\n")
        for(int j=1;j<=n;j++)
            cout<<mat[i][j]<<" ";
}