#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>

using namespace std;

struct persoana{
    char nume[101];
    char prenume[101];
    double medie_generala;
};
persoana p[101];
double media_clasei;
short cerinta;
double medie,medie_1,medie_2,medie_3;
int n;

int ord(persoana x,persoana y){
    if(x.medie_generala>y.medie_generala)
        return 1;
    else if(x.medie_generala==y.medie_generala && strcmp(x.nume,y.nume)<0)
        return 1;
    else if(x.medie_generala==y.medie_generala && strcmp(x.nume,y.nume)==0 && strcmp(x.prenume,y.prenume)<0)
        return 1;
    else return 0;
}

int main(void)
{
    cin>>n>>cerinta;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].nume>>p[i].prenume>>medie_1>>medie_2>>medie_3;
        medie=(medie_1+medie_2+medie_3)/3;
        p[i].medie_generala=medie;
        media_clasei+=medie;
    }
    media_clasei/=n;
    switch(cerinta)
    {
        case 1:
        {
            int nre=0;
            for(int i=1;i<=n;i++)
                if(p[i].medie_generala>media_clasei)
                    nre++;
            cout<<nre<<" ";
            break;
        }
        case 2:
        {
            cout<<setprecision(2)<<fixed<<media_clasei<<endl;
            sort(p+1 , p+n+1, ord);
            for(int i=1;i<=n;i++)
                cout<<p[i].nume<<" "<<p[i].prenume<<" "<<p[i].medie_generala<<"\n";
            break;
        }
    }
}