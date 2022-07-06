#include <stdio.h>

using namespace std;

int n;

int main(void)
{
    scanf("%d", &n);
    if((n&(n-1))==0)
        printf("DA");
    else printf("NU");
}