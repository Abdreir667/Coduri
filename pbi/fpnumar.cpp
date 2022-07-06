#include <stdio.h>

using namespace std;

int a,b,k;

int kpn(int a,int b,int k)
{
    int cautat,p=0;
    for(int i=a,p=0;i<=b && p<=k;i++)
    {
        int suma=i+1;
        for(int j=2;j*j<=i;j++)
            if(i%j==0)
            {
                if(i/j==j)
                    suma+=j;
                else suma=suma+j+(i/j);
            }
        if(suma%2==i%2)
        {
            p++;
            if(p==k)
            {
                cautat=i;
                return cautat;
            }
        }
    }
    if(p<k)
        return -1;
    
}

int main(void)
{
    scanf("%d %d %d",&a,&b,&k);
    printf("%d",kpn(a,b,k));
}