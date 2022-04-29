#include <fstream>
#include <vector>

using namespace std;

ifstream cin("secvk.in");
ofstream cout("secvk.out");

int n,k,nri,maxi=0,c1=0,c2=0;

int main(void)
{
    cin>>n>>k;
    vector<int> suma(n+1);
    vector<int> numere(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>numere[i];
        suma[i]=suma[i-1]+numere[i];
    }
    for(int i=0;i<suma.size()-k;i++)
    {
        if(suma[i+k]-suma[i]>=maxi)
        {
            c1=i+1;
            c2=i+k;
            maxi=suma[i+k]-suma[i];
        }
    }
    for(int i=c1;i<=c2;i++)
        cout<<numere[i]<<" ";
    
}