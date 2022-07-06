/// Avem o matrice de dimensiuni N x M, cu elemente 0 și 1.
/// Numim segment o secvență de cel puțin două valori 1 aflate una lângă alta, toate pe aceeași linie,
/// sau toate pe aceeași coloană a matricei.
/// Se cere determinarea numărului de perechi de segmente:
///  1. aflate pe linii distincte ale matricei;
///  2. aflate pe coloane distincte ale matricei;

#include <iostream>
#include <fstream>

using namespace std;

int n, m, i, j, t, perechi=0, crt, k, l;
bool a[502][502];
long long seg[1004]= {0};

int main()
{
    ifstream f("paralele.in");
    ofstream g("paralele.out");
    f>>t>>n>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            f>>a[i][j];
    f.close();
    if(t==1)
    {
        perechi=0;
        for(i=1; i<=n; i++)
        {
            crt=0;
            for(j=1; j<=m+1; j++)
                if(a[i][j]==1 && j<=m)
                    crt++;
                else
                {
                    if(crt==2)
                        seg[i]++;
                    else if(crt>2)
                        seg[i]=seg[i]+((crt-1)*crt)/2;
                    crt=0;
                }
        }
        for(k=1; k<n; k++)
                for(l=k+1; l<=n; l++)
                    if(seg[k]*seg[l]>0)
                        perechi=perechi+seg[k]*seg[l];
        g<<perechi;
    }
    return 0;

}