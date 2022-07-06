#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sort_div.in");
ofstream cout("sort_div.out");

int n;

struct numere{
    int valoare;
    int cifra_de_control;
    int prima_cifra;
    int numar_divizori;
};
numere p[10001];

int ord(numere x,numere y)
{
    if(x.numar_divizori!=y.numar_divizori)
        return x.numar_divizori< y.numar_divizori;
    else if(x.cifra_de_control!=y.cifra_de_control)
        return x.cifra_de_control< y.cifra_de_control;
    else if(x.prima_cifra!=y.prima_cifra)
        return x.prima_cifra< y.prima_cifra;
    else if(x.valoare!=y.valoare)
        return x.valoare< y.valoare;
    else return 0;
}

short nrd(int n)
{
    short nrd=1;
    int d=2;
    while(n>1)
    {
        if(n%d==0)
        {
            int p=0;
            while(n%d==0)
            {
                p++;
                n/=d;
            }
            nrd*=(p+1);
        }
        d++;
        if(d*d>n)
            d=n; 
    }
    return nrd;
}

int prima_cifra(int n)
{
    while(n>9)
        n/=10;
    return n;
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].valoare;
        p[i].cifra_de_control=p[i].valoare%9;
        if(p[i].cifra_de_control==0)
            p[i].cifra_de_control=9;
        p[i].prima_cifra=prima_cifra(p[i].valoare);
        p[i].numar_divizori=nrd(p[i].valoare);
    }
    sort(p+1,p+n+1,ord);
    for(int i=1;i<=n;i++)
        cout<<p[i].valoare<<" ";
}