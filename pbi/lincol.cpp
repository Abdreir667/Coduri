#include <fstream>

using namespace std;

ifstream cin("lincol.in");
ofstream cout("lincol.out");

int mat[101][101],linii,coloane,numar_intrebari,nr_tip;
char tip;

int main(void)
{
    cin>>linii>>coloane;
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
            cin>>mat[i][j];
    cin>>numar_intrebari;
    for(int i=1;i<=numar_intrebari;i++)
    {
        int suma=0;
        cin>>tip>>nr_tip;
        switch (tip)
        {
            case 'C':
            {
                for(int i=1;i<=linii;i++)
                    suma+=mat[i][nr_tip];
            }
            break;
            case 'L':
            {
                for(int i=1;i<=coloane;i++)
                    suma+=mat[nr_tip][i];
            }
            break;
        }
        cout<<suma<<endl;
    }
}
        