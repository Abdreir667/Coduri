/// Definim un număr liber de pătrate ca fiind un număr natural care nu are ca divizor niciun pătrat perfect
/// mai mare ca 1. Prin convenție, 1 este considerat liber de pătrate.

/// Așadar, șirul numerelor libere de pătrate este: 1,2,3,5,6,7,10,11,13,14,15,17, ...

/// Se consideră un șir de N numere naturale X[i], 1 ≤ i ≤ N, unde N este un număr natural.
/// O secvență este un subșir format din numere aflate pe poziții consecutive în șirul dat.
/// Definim o bisecvență ca un subșir nevid obținut prin eliminarea dintr-o secvență a unui număr care nu este
/// la începutul sau la sfârșitul secvenței.

/// 1) Să se determine câte numere libere de pătrate conține șirul dat.
/// 2) Să se determine cea mai lungă bisecvență din șir formată din numere libere de pătrate,
/// obținută prin eliminarea unui număr care nu este liber de pătrate.

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool sqfree[1000000]= {false};
int secv[1000000], sf[1000000];

int main()
{
    ifstream f("oneout.in");
    ofstream g("oneout.out");
    int c, n, maxi=-1, i, j, nr, nrsqfree, secven, nrsecv, secvmax, sec;
    bool oneout;
    f>>c>>n;
    for(i=1; i<=n; i++)
    {
        f>>nr;
        if(nr>maxi)
            maxi=nr;
    }
    for(i=4; i<=maxi; i++)
        if(sqrt(i)==int(sqrt(i)))
            sqfree[i]=true;
    for(i=4; i<=maxi; i++)
        if(sqfree[i]==true)
            for(j=2*i; j<=maxi; j=j+i)
                sqfree[j]=true;
    f.close();
    f.open("oneout.in");
    f>>c>>n;
    if(c==1)
    {
        nrsqfree=0;
        for(i=1; i<=n; i++)
        {
            f>>nr;
            if(sqfree[nr]==false)
                nrsqfree++;
        }
        g<<nrsqfree;
    }
    else
    {
        oneout=false;
        secven=0;
        nrsecv=0;
        secvmax=-1;
        sec=0;
        for(i=1; i<=n+1; i++)
        {
            if(i<=n)
                f>>nr;
            else nr=4;
            if(sqfree[nr]==false)
                secven++;
            if(sqfree[nr]==true)
            {
                secv[++sec]=secven;
                sf[sec]=i-1;
                secven=0;
            }
        }
        for(i=1; i<sec; i++)
            if(secv[i]+secv[i+1]>secvmax)
            {
                secvmax=secv[i]+secv[i+1];
                nrsecv=1;
            }
            else
                if(secv[i]+secv[i+1]==secvmax)
                    nrsecv++;
        g<<secvmax<<" "<<nrsecv<<endl;
        for(i=1; i<sec; i++)
            if(secv[i]+secv[i+1]==secvmax)
                g<<sf[i+1]-(secv[i]+secv[i+1])<<" "<<sf[i+1]<<endl;

    }


    return 0;
}