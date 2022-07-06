#include <stdio.h>
#include <bitset>

using namespace std;

int n,nr;

int main(void)
{
    scanf("%d",&n);
    if(n<0)
        n=~n;
    bitset<32> bitset1(n);
    bitset<3> bitset2;
    bitset2[0]=bitset1[6];
    bitset2[1]=bitset1[7];
    bitset2[2]=bitset1[7];
    printf("%d", (int)(bitset2.to_ullong()));
}
