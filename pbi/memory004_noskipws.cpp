#include <fstream>
#include <vector>

using namespace std;

ifstream cin("memory004.in");
ofstream cout("memory004.out");

short linii,coloane,nr,lmax=0;

bool is_prime(short n)
{
    bool ok=true;
    if(n<2)
        ok=false;
    else for(int i=2;i*i<=n && ok!=false;i++)
            if(n%i==0)
                ok=false;
    return ok;
}

int main(void)
{
    cin>>linii>>coloane;
    vector<short> primele_nr(coloane,0);
    vector<short> lung_ultima(coloane,0);
    vector<bool> prim_gasit(coloane,0);
    for(int i=0;i<linii*coloane;i++)
    {
        cin>>nr;
        if(is_prime(nr)==true)
        {
            if(prim_gasit[i%coloane]==0)
                primele_nr[i%coloane]++;
            lung_ultima[i%coloane]++;
        }
        else
        {
            prim_gasit[i%coloane]=1;
            if(lung_ultima[i%coloane]>lmax)
            {
                lmax=lung_ultima[i%coloane];
                lung_ultima[i%coloane]=0;
            }
        }
    }
    short lung_temporara;
    for(int i=0;i<lung_ultima.size()-1;i++)
    {
        lung_temporara=lung_ultima[i]+primele_nr[i+1];
        if(lung_temporara>lmax)
            lmax=lung_temporara;
    }
    cout<<lung_temporara;
}