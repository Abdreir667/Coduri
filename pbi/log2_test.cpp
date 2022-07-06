#include <stdio.h>

using namespace std;

int floorLog2(long long x)
{
    return __builtin_ctzll(x);
}

int n,nr;

int main(void)
{
    scanf("%d",&n);
    printf("%d",floorLog2(n));
}