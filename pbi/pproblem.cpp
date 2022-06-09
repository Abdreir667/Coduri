/// Se citeşte din fişierul de intrare o matrice pătratică A cu n linii şi n coloane conţinând numere naturale. Scrieţi un program care modifică matricea A în modul următor:

/// I. interschimbă elementele matricei din triunghiul superior cu cele din triunghiul inferior al matricei

/// II. după aceea interschimbă elementele superprime distincte, care apar în triunghiul din dreapta
/// cu cel din triunghiul din stânga al matricei (ambele elemente trebuie să fie superprime);

/// Un număr natural n se numeşte superprim dacă printre numerele care pot fi obţinute mutând, pe rând,
/// prima cifră a numărului n şi a celor obţinute pe parcurs, pe ultima poziţie, există cel puţin un număr prim.
/// De exemplu 124 este “superprim” deoarece dintre numerele 241, 412 şi 124, numărul 241 este prim.
/// 15 nu este “superprim” deoarece nici 51, nici 15 nu sunt numere prime.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    short a[51][51], n, i, j, d, c, nr, cif[6], dim, st, dr, pow10, k;
    bool prim, superprim;
    ifstream f("matrice.in");
    ofstream g("matrice.out");
    f>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    f.close();
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i<j && i+j<n+1)
                swap(a[i][j], a[n+1-i][j]);
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i>j && i+j<n+1)
            {
                pow10=1;
                dim=0;
                prim=true;
                superprim=false;
                nr=a[i][j];
                while(nr>0)
                {
                    cif[++dim]=nr%10;
                    nr=nr/10;
                }
                st=1;
                dr=dim;
                while(st<dr)
                {
                    swap(cif[st], cif[dr]);
                    st++;
                    dr--;
                }
                for(c=1; c<dim; c++)
                    pow10=pow10*10;
                nr=a[i][j];
                for(c=1; c<=dim; c++)
                {
                    prim=true;
                    for(d=2; d*d<=nr; d++)
                        if(nr%d==0)
                        {
                            prim=false;
                            break;
                        }
                    if(prim==true && nr>=2)
                        superprim=true;
                    if(superprim==true)
                    {
                        swap(a[i][j], a[i][n+1-j]);
                        break;
                    }
                    cif[++dim]=cif[1];
                    for(k=1; k<dim; k++)
                        cif[k]=cif[k+1];
                    dim--;
                    nr=0;
                    for(k=1; k<=dim; k++)
                    {
                        nr=nr+cif[k]*pow10;
                        pow10=pow10/10;
                    }
                    cout<<nr<<" ";

                }
            }

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=n; j++)
            g<<a[i][j]<<" ";
        g<<endl;
    }
    return 0;
}