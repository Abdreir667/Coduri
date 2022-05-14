#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

ifstream cin("cufar.in");
ofstream cout("cufar.out");

int n,k,c,nr;
vector<int> numar(1000000);//vectorul in care se retine k
vector<int> nr_div(1000000,0);//vectorul in care se incrementeaza valorile pentru numerele prime divizori
vector<bool> divizori_primi(1000000,0);//vectorul pentru prima cerinta care verifica numerele prime mai mici decat nr
long long cifru=0;

int ciurul_lui_eratostene(int n,int k)//parametrii functiei sunt numerele n si k reprezentand numarul citit si divizorul care trebuie afisat
{
    int nrd=1,afisare;//nrd=numarl de divizori gasiti
    for(int i=2;i<=n && nrd<=k;i++)//incepe de la 2 pentru ca 1 nu este prim,iar se termina cand i este egal ca n sau cand s-a gasit al k=lea divizor
        if(divizori_primi[i]==0)//am luat vectorul divizori_primi in bool,deci 0=numere prime iar 1=numere compuse sau cum se mai numesc
        {
            if(n%i==0)//verfiicam daca i este divizorul lui n
            {
                nrd++;//daca este se mareste nrd pana ajunge la k
                afisare=i;//iar valoarea de afisat se trece in afisare
            }
            for(int j=2;j<=1000000/i;j++)//daca s-a gasit un umar prim toti multipluu mai mici decat numarl maxim/i vor fi notati cu 1,adica compusi si nu primi
                divizori_primi[i*j]=1;//notarea cu 1
        }
    return afisare;//odata ce s-a terminat functia returneaza numarul cerut
}

void ciur_cerinta_2(void)
{
    for(int i=2;i<=1000000;i++)//se scaneaza toate numerele mai mici decat un milion
        if(nr_div[i]==0)//daca numarul resepctiv este 0 se vor incrementa toti multiplii
            for(int j=1;j<=1000000/i;j++)//analog ca la prima functie
            {
                nr_div[i*j]++;//incrementarea multiplilor
                if(nr_div[i*j]==numar[i*j])//daca valoare incrementa este egala cu k(retinut in tabloul numar) atunci se adauga numarul respectiv la cifru
                    cifru+=i;//adunarea numarulul la cifru
            }
}

int main(void)
{
    cin>>c;
    switch (c)//switch case sunt ca un fel de if-uri doar ca mai "fancy" si daca nu dai break va trece la alta ramura 
    {
        case 1:
        {
            cin>>n>>nr>>k;
            cout<<ciurul_lui_eratostene(nr,k);//imagineaza-ti ce am scris la functia de la randul 16 pana la  31 aici
        }
        break;
        case 2:
        {
            cin>>n;
            switch(n)
            {
                case 1:
                {
                    cin>>nr>>k;
                    cout<<ciurul_lui_eratostene(nr,k);//ce este scris de la 35 pana la 42
                }
                break;
                default:
                {
                    for(int i=1;i<=n;i++)
                    {
                        cin>>nr>>k;
                        numar[nr]=k;
                    }
                    ciur_cerinta_2();
                    cout<<cifru<<" ";
                }
                break;
            }

        }
        break;
    }

}