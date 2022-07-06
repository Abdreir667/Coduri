#include <stdio.h>
#include <vector>

using namespace std;

FILE *in = fopen("binar.in", "r");
FILE *out = fopen("binar.out", "w");

int n, nr;
vector<short> numere;
short cerinta,val_maxima=0,numar_maxim=0;

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
    fscanf(in, "%d %d", &cerinta, &numere);
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
            fprintf(in, "%d",numar_maxim);
            break;
        }

    }
}