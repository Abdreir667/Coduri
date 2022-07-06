#include <fstream>
#include <cstring>
#include <algorithm>

using namespace std;

ifstream cin("ratc2.in");
ofstream cout("ratc2.out");

short n,cerinta,k=0;
string nume,prenume;
bool bilet_platit;

struct persoane{
    string nume,prenume;
    short penalizari=0;
};
persoane p[101];

int cautare(string nume,string prenume)
{
    for(int i=1;i<=n;i++)
    {
        if(nume==p[i].nume && prenume==p[i].prenume)
            return i;
    }
    return -1;
}

int ord(persoane x,persoane y)
{
    if(x.penalizari>y.penalizari)
        return 1;
    else if(x.penalizari==y.penalizari && x.nume<y.nume)
        return 1;
    else if(x.penalizari==y.penalizari && x.nume==y.nume && x.prenume<y.prenume)
        return 1;
    else return 0;
}


int main(void)
{
    cin>>n>>cerinta;
    for(int i=1;i<=n;i++)
    {
        cin>>nume>>prenume>>bilet_platit;
        int poz=cautare(nume,prenume);
        if(poz==-1)
        {
            p[++k].nume=nume;
            p[k].prenume=prenume;
            if(bilet_platit==0)
                p[k].penalizari++;
        }
        else if(bilet_platit==0)
                p[poz].penalizari++;
    }
    sort(p+1,p+1+k,ord);
    switch(cerinta)
    {
        case 1:{
            cout<<p[1].nume<<" "<<p[1].prenume<<" "<<p[1].penalizari<<"\n";
            break;
        }
        case 2:{
            for(int i=1;i<=k;i++)
                cout<<p[i].nume<<" "<<p[i].prenume<<" "<<p[i].penalizari<<"\n";
            break;
        }
    }
    
}