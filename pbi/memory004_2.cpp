#include <fstream>

using namespace std;

ifstream cin("memory004.in");
ofstream cout("memory004.out");

short linii,coloane,lmax=0,lcur=0,nr;

struct linii{
    short inceput;
    short sfarsit;
}p[1001];

bool is_prime(short n)//verificarea daca numarul dat ca parametru este prim sau nu
{
    bool ok=true;
    if(n<2)
        ok=false;
    else for(int i=2;i*i<=n;i++)
            if(n%i==0)
            {
                ok=false;
                break;
            }
    return ok;
}

int main(void)
{
    cin>>linii>>coloane;
    for(int i=0;i<linii;i++)
        for(int j=0;j<coloane;j++)
        {
            cin>>nr;
            if(is_prime(nr)==true) 
            {
                if(i==p[j].sfarsit)
                    p[j].inceput++; 
                p[j].sfarsit++;
            }
            else
            {
                if(p[j].sfarsit>lmax)
                    lmax=p[j].sfarsit;
                p[j].sfarsit=0;
            }
        
        }
    for(int j=0;j<=coloane;j++)
    {
        lcur+=p[j].inceput;
            if(p[j].sfarsit!=linii)
            {
                if(lcur>lmax)
                    lmax=lcur;
                lcur=p[j].sfarsit;
            }
        if(lcur>lmax)
            lmax=lcur;
    }
    cout<<lmax<<endl;
}
