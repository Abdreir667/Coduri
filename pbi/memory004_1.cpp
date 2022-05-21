#include <fstream>

using namespace std;

ifstream cin("memory004.in");
ofstream cout("memory004.out");

short linii,coloane,nr,lmax=0,j;

struct linii{
    short lung_inceput=0;//lungimea pana cand se intalneste un numar prim pe coloana pentur prima data
    bool terminat=false;//conditia pentru aflarea lung_inceput
    short lung_final=0;//lungimea curenta a unei secvente de pe coloana
}p[1001];

bool is_prime(unsigned short n) {

    if(n <= 1) return false;

    if(n <= 3) return true;

    if(n % 2 == 0 || n % 3 == 0) return false;

    for(unsigned short i = 5; i * i <= n; i = i + 6)

        if(n % i == 0 || n % (i + 2) == 0)

            return false;

    return true;

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
                if(p[j%coloane].terminat==false)
                    p[j%coloane].lung_inceput++;
                p[j%coloane].lung_final++;
                if(p[j%coloane].lung_final>lmax)
                    lmax=p[j%coloane].lung_final;
            }
            else
            {
                p[j%coloane].terminat=true;
                p[j%coloane].lung_final=0;
            }
        }
    for(int i=0;i<coloane;i++)
    {
        int lung_temporara=0;
        int k=i;
        if(p[i].lung_final>0 && p[i+1].lung_inceput>0)
        {
            lung_temporara=p[i+1].lung_inceput;
            k++;
        }
        if(p[i+1].lung_inceput==linii && p[i].lung_final>0)
        {
            lung_temporara+=p[k].lung_inceput;
            while (p[k+1].lung_inceput==linii && p[k].lung_final>0)
            {
                k++;
                lung_temporara+=p[k].lung_final;
            }
            k++;
            lung_temporara+=p[k].lung_inceput;
            i=k;
        }
        if(lung_temporara>lmax)
            lmax=lung_temporara;
    }
    cout<<lmax;
}