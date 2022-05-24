#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

ifstream cin("pow2.in");
ofstream cout("pow2.out");

int n,nr,nre=0;
vector<long long> putere_2(31,1);
struct pereche{
    long long numar;
    bool a_fost_parcurs=false;
}p[100001];

void generare_puteri2(void)
{
    putere_2[0]=1;
    for(int i=1;i<=30;i++)
        putere_2[i]=putere_2[i-1]*2;
}

bool binarysearch(pereche v[],int st,int dr,long long nr)
{
    int o;
    int m=(st+dr)/2;
    while(st<=dr)
    {
        m=(st+dr)/2;
        if(v[m].numar<=nr)
        {
            o=m;
            st=m+1;
            if(v[m].numar==nr && v[m].a_fost_parcurs==true)
                return true;
        }
        else dr=m-1;
    }
    return false;
}


int main(void)
{
    cin>>n;
    int maxi=0;
    for(int i=1;i<=n;i++)
        cin>>p[i].numar;
    generare_puteri2();
    for(int i=0;i<n-1;i++)
    {
            for(int j=1;j<=30;j++)
            {
                int valoare=putere_2[j]-p[i].numar;
                if(binarysearch(p,i+1,n,valoare)==true)
                    nre++;
            }
    }
    cout<<nre<<endl;    
}