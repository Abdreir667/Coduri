#include <bitset>
#include <stdio.h>

using namespace std;

int nr;

int main(void)
{
    scanf("%d", &nr);
    bitset<16> bitset1(nr);
    for(int i=0;i<=7;i++)
    {
        int aux=bitset1[i];
        bitset1[i] = bitset1[8+i];
        bitset1[8+i]=aux;
    }
    printf("%d",(short)(bitset1.to_ullong()));
}