#include <iostream>
#include <fstream>
/// Se considera fisierul numere.in care contine mai multe nr.intregi. Sa se citeasca aceste nr. in doua tablouri
/// a.i. primul sa se memoreze doar valorile prime, iar in cel de-al doilea restul.
using namespace std;

int main()
{
    ifstream f("numere.in");
    int prime[100], neprime[100];
    int nr, p=0, n=0, d, i;
    bool prim=true;
    while (f>>nr)
    {
        prim=true;
        for (d=2; d<=nr/2; d++)
            if (nr%d==0)
                prim=false;
        if (prim==true &&nr>=2)
            prime[++p]=nr;
        else
            neprime[++n]=nr;

    }
    if (p>=1)
    {
        cout<<"Tabloul de numere prime este: ";
        for (i=1; i<=p; i++)
            cout<<prime[i]<<" ";
    }
    else
        cout<<"Nu exista numere prime."<<endl;
    if (n>=1)
    {
        cout<<endl<<"Tabloul de numere neprime este: "<<endl;
        for (i=1; i<=n; i++)
            cout<<neprime[i]<<" ";
    }
    else
        cout<<"Nu exista numere neprime.";

    return 0;
}
