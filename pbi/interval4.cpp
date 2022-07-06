#include <stdio.h>

using namespace std;
 
int nr;

int interval(int n)
{
    for(int i=n;i<=100000000;i++)
    {
        bool prim=true;
        for(int j=2;j*j<=i;j++)
            if(i%j==0)
                prim=false;
        if(prim==true)
            return i+1;     
    }
}

int main(void)
{
    scanf("%d", &nr);
    printf("%d",interval(nr));
}