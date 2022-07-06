#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("qclasa.in");
ofstream cout("qclasa.out");

int nr_elevi,nr_10=0,medie_clasa=0;

struct elev{
    int cod;
    short medie;
    short nr_absente;
};
elev p[41];

int ord(elev x,elev y)
{
    if(x.nr_absente!=y.nr_absente)
        return x.nr_absente>y.nr_absente;
    else if(x.cod!=y.cod)
        return x.cod<y.cod;
}

int main(void)
{
    cin>>nr_elevi;
    for(int i=1;i<=nr_elevi;i++)
    {
        cin>>p[i].cod>>p[i].medie>>p[i].nr_absente;
        medie_clasa+=p[i].medie;
        if(p[i].medie==10)
            nr_10++;
    }
    cout<<nr_10<<"\n"<<medie_clasa/nr_elevi<<"\n";
    sort(p+1,p+1+nr_elevi,ord);
    for(int i=1;i<=2;i++)
        cout<<p[i].cod<<" "<<p[i].medie<<" "<<p[i].nr_absente<<"\n";
}