#include <fstream>
#include <algorithm>
#include <set>
#include <ios>
#include <cstring>

using namespace std;

ifstream fin("sort4.in");
ofstream fout("sort4.out");

struct numere
{
    short cifre_distincte;
    short suma_cifrelor;
    int produsul_cifrelor;
    int valoare;
};

numere p[1000001];
set<short> cifre;
int n,nr;
char s[12];
short sum=0,rasp=0;
int prod=1;

void cifre_distincte(int n)
{
    cifre.clear();
    sum=0,prod=1;
    while (n)
    {
        cifre.insert(n % 10);
        sum+=n%10;
        prod*=n%10;
        n /= 10;
    }
    rasp=cifre.size();
}

int ord(numere x, numere y)
{
    if(x.cifre_distincte!=y.cifre_distincte)
        return x.cifre_distincte>y.cifre_distincte;
    else if(x.suma_cifrelor!=y.suma_cifrelor)
        return x.suma_cifrelor<y.suma_cifrelor;
    else if(x.produsul_cifrelor!=y.produsul_cifrelor)
        return x.produsul_cifrelor< y.produsul_cifrelor;
    return x.valoare<y.valoare;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    fin>>n;
    int k=0;
    while(fin.get(s,12,' '))
    {

        nr=atoi(s);
        p[++k].valoare=nr;
        cifre_distincte(nr);
        p[k].cifre_distincte = rasp;
        p[k].suma_cifrelor = sum;
        p[k].produsul_cifrelor = prod;
        fin.get();
    }
    sort(p + 1, p + n + 1, ord);
    for (int i = 1; i <= n; i++)
        fout<<p[i].valoare<<" ";
}