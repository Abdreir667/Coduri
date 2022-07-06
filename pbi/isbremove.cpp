#include <stdio.h>
#include <bitset>

using namespace std;

long long n,i=1;
bool gasit=false;

int main(void)
{
    scanf("%d",&n);
    while(gasit==false)
    {
        if((n&i)!=0)
        {
            n &= ~i;
            printf("%d",n);
            gasit=true;
            break;
        }
        i<<=1;
    }
}