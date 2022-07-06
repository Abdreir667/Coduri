#include <stdio.h>
#include <vector>

using namespace std;

#define INT_MAX +2147483647

FILE *in = fopen("binar.in", "r");
FILE *out = fopen("binar.out", "w");

int n, nr,numar_maxim=0,lung_max=0;
short cerinta,val_maxima=0;

int valori1(int n)
{
    int nre = 0;
    while (n)
    {
        if (n % 2 == 1)
            nre++;
        n /= 2;
    }
    return nre;
}

int main(void)
{
    fscanf(in, "%d %d", &cerinta, &n);
    switch (cerinta)
    {
        case 1:
        {
            for (int i = 1; i <= n; i++)
            {
                fscanf(in, "%d", &nr);
                int temp=valori1(nr);
                if(temp>val_maxima)
                {
                    val_maxima=temp;
                    numar_maxim=nr;
                }
                else if(temp==val_maxima)
                {
                    if(nr>numar_maxim)
                        numar_maxim=nr;
                }
            }
            fprintf(out, "%d",numar_maxim);
            break;
        }
        case 2:
        {
            int last_val=0,lung=0,inceput;
            for(int i=1; i <= n; i++)
            {
                fscanf(in, "%d", &nr);
                int temp=valori1(nr);
                if(temp==last_val)
                    lung++;
                else{
                    if(lung_max<lung)
                    {
                        lung_max=lung;
                        inceput=i-lung;
                    }
                    lung=1;
                    last_val=temp;
                }
            }
            if(lung_max<lung)
                lung_max=lung,inceput=n-lung+1;
            fprintf(out,"%d %d\n",lung_max,inceput);
            break;
        }
    }
}