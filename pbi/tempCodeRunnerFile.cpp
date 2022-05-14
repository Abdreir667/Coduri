#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

ifstream cin("cufar.in");
ofstream cout("cufar.out");

int n,k,c,nr;
vector<bool> divizori_primi(1000000,0);

int ciurul_lui_eratostene(int n,int k)
{
    int nrd=1,afisare;
    divizori_primi[0]=divizori_primi[1]=0;
    for(int i=2;i*i<=n && nrd<=k;i++)
        if(divizori_primi[i]==0)
        {
            for(int j=2;j<=floor(n/i);j++)
                divizori_primi[i*j]=1;
            afisare=i;
            nrd++;
        }
    return afisare;
}

int main(void)
{
    cin>>c>>n;
    switch (c)
    {
        case 1:
        {
            cin>>nr>>k;
            cout<<ciurul_lui_eratostene(nr,k);
        }
    }

}