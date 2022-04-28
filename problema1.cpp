#include <iostream>
#include <fstream>
/*Fisierul multimi.in contine pe prima linie o valoare pentru m iar pe urmatoarea linie m 
numere intregi.Pe cea de-a treia linie gasim o valoare pentru n iar pe cea de-a patra n numere 
intregi.In liniile 2 si 4 gasim cate o multime.Sa se scrie in fisierul reuniune.txt reuniunea celor
doua mulitmi.*/
using namespace  std;

int main()
{
    int mult1[100],mult2[100],rez[150],cont;
    bool conditie;
    ifstream f("multimi.in");
    ofstream  g("reuniune.out");
    int n,m;
    f>>n;
    for(int i=1;i<=n;i++)
        f>>rez[i];
    f>>m;
    for(int i=1;i<=m;i++)
        f>>mult2[i];
    cont=n;
    for(int i=1;i<=n;i++)
    {
        conditie=true;
        for(int j=1;j<=m;j++)
        {
            if(rez[i]==mult1[j])
                conditie=false;
            if(conditie==true)
                rez[++cont]=mult2[j];
        }
    }
    for(int i=1;i<=cont;i++)
        cout<<rez[i]<<" ";
}