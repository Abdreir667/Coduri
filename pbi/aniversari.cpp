#include <iostream>
#include <algorithm>

using namespace std;

struct persoana{
    short an;
    short luna;
    short zi;
    short indice;
};
persoana p[1001];

int nr_persoane;

short ord(persoana x,persoana y){
    if(x.an!=y.an)
        return x.an<y.an;
    else if(x.luna!=y.luna)
        return x.luna<y.luna;
    else if(x.zi!=y.zi)
        return x.zi<y.zi;
}

int main(void)
{
    cin>>nr_persoane;
    for(int i=1;i<=nr_persoane;i++)
    {
        cin>>p[i].an>>p[i].luna>>p[i].zi;
        p[i].indice=i;
    }
    sort(p+1,p+1+nr_persoane,ord);
    cout<<p[nr_persoane].indice<<" "<<p[1].indice;
}