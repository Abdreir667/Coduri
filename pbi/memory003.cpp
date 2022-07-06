#include <stdio.h>

using namespace std;

int v[302];
long long linii, coloane, divizor, nr;

int main(void)
{
    FILE *in = fopen("memory003.in", "r");
    FILE *out = fopen("memory003.out", "w");
    fscanf(in, "%d %d %d", &linii, &coloane, &divizor);
    for (int i = 1; i <= coloane; i++)
        v[i] = 1;
    for (int i = 1; i <= linii; i++)
    {
        for (int j = 1; j <= coloane; j++)
        {
            fscanf(in, "%d", &nr);
            v[i] = (v[i] * nr) % divizor;
        }
    }
    int nre = 0;
    for (int i = 1; i <= coloane; i++)
        if (v[i] % divizor == 0)
            nre++;
    fprintf(out, "%d", nre);
}
