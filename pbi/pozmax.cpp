#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,a;
    ifstream f("pozmax.in");
    ofstream g("pozmax.out");
    f>>n;
    int tab[1000],pozmin,pozmax,min=100000,max=1;
    for(int i=1;i<=n;i++)
    {
        f>>a;
        tab[i]=a;
    }
    for(int j=1;j<=n;j++)
    {
        if(tab[j]>max)
        {
            max=tab[j];
            pozmax=j;
        }
        if(tab[j]<min)
        {
            min=tab[j];
            pozmin=j;
        }
    }
    g<<pozmin<<" "<<pozmax<<endl;
    return 0;
}