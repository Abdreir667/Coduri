#include <fstream>
#include <set>
#include <algorithm>
#include <cstring>

using namespace std;

ifstream cin("serbare.in");
ofstream cout("serbare.out");

struct copil{
    char nume[31];
    short inaltime;
};

copil p[101];
int n;
short aparitii[151]={0},cerinta,maxi=0,hmax=0;
short x,y;
set<short> inaltimi;
set<short,greater<int>> inaltimi1;

int ord1(copil x,copil y){
    if(x.inaltime!=y.inaltime)
        return x.inaltime<y.inaltime;
    else if(strcmp(x.nume,y.nume)<0)
        return x.nume<y.nume;
    return 0;
}

int main(void)
{
    cin>>cerinta>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].nume>>p[i].inaltime;
        aparitii[p[i].inaltime]++;
        if(p[i].inaltime>hmax)
            hmax=p[i].inaltime;
        inaltimi.insert(p[i].inaltime);
        inaltimi1.insert(p[i].inaltime);
    }
    switch(cerinta)
    {
        case 1:
        {
            for(int i=0;i<=151;i++)
                if(aparitii[i]>maxi)
                    maxi=aparitii[i];
            cout<<maxi<<" ";
            break;
        }
        case 2:
        {
            short temp=inaltimi.size()-aparitii[hmax];
            if(temp%2==0)
                x=y=temp/2;
            else x=temp/2+1,y=temp-x;
            short nra=0;
            for(auto o:inaltimi)
            {
                for(int i=1;i<=aparitii[o];i++)
                    cout<<o<<" ";
                aparitii[o]=0;
                nra++;
                if(nra==x)
                    break;
            }
            for(int i=1;i<=aparitii[hmax];i++)
                cout<<hmax<<" ";
            aparitii[hmax]=0;
            nra=0;
            for(auto o:inaltimi1)
            {
                if(aparitii[o]!=0)
                {
                    for(int i=1;i<=aparitii[o];i++)
                        cout<<o<<" ";
                nra++;
                if(nra==y)
                    break;
                }
            }
        }
        case 3:
        {
            sort(p+1,p+1+n);
            short temp=n-aparitii[hmax];
            if(temp%2==0)
                x=y=temp/2;
            else x=temp/2+1,y=temp-x;
            for(int i=1;i<=x;i++)
                cout<<p[i].nume<<" ";
        }
    }
}