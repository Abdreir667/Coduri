#include <fstream>
#include <bitset>

using namespace std;

ifstream cin("fadema.in");
ofstream cout("fadema.out");

int linii,coloane;
bool nr,nr1;

struct linii{
    short start;
    short stop;
    short lungime_max=0;
}p[1001];

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
    {
        int k=1;
        cin>>nr;
        for(int j=2;j<=coloane;j++)
        {
            cin>>nr1;
            if(nr1!=nr)
            {
                k++;
            }
            else if(nr1==nr || j==coloane)
            {
                p[i].lungime_max=k;
                p[i].start=j-k;
                p[i].stop=j;
                k=1;
            }
            nr=nr1;
        }
    }
    for(int i=1;i<=linii;i++)
        cout<<p[i].lungime_max<<" "<<p[i].start<<" "<<p[i].stop<<endl;
}
