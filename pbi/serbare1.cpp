#include <fstream>
#include <cstring>
#include <algorithm>
#include <set>

using namespace std;

ifstream cin("serbare1.in");
ofstream cout("serbare1.out");

struct elev{
    char nume[51],prenume[51];
    short inaltime;
};

elev p[101];
short nr_elevi;
set<short,greater<int>> inaltimi;

int ord(elev x,elev y)
{
    if(x.inaltime!=y.inaltime)
        return x.inaltime>y.inaltime;
    else if(x.nume!=y.nume)
    {
        if(strcmp(x.nume,y.nume)<0)
            return x.nume>y.nume;
        else return x.nume<y.nume;
    }
    else
    {
        if(strcmp(x.prenume,y.prenume)<0)
            return x.prenume>y.prenume;
        else return x.prenume<y.prenume;
    }
    return 0;
}

int main(void)
{
    cin>>nr_elevi;
    for(int i=1;i<=nr_elevi;i++)
    {
        cin>>p[i].nume>>p[i].prenume>>p[i].inaltime;
        inaltimi.insert(p[i].inaltime);
    }
    cout<<inaltimi.size()<<"\n";
    sort(p+1,p+1+nr_elevi,ord);
    short temp=1,temp_ant=1;
    for(auto x:inaltimi)
    {
        short numere=0;
        while(p[temp].inaltime==x)
            temp++,numere++;
        cout<<numere<<" ";
        for(int i=temp_ant;i<=temp-1;i++)
            cout<<p[i].nume<<" "<<p[i].prenume<<" ";
        temp_ant=temp;
        if(temp_ant!=nr_elevi+1)
            cout<<"\n";
    }

}