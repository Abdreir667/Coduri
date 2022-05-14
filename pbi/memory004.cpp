#include <fstream>
#include <vector>

using namespace std;

ifstream cin("memory004.in");
ofstream cout("memory004.out");

int linii,coloane,nr,cpos;

int nrc(int n)
{
    int numar_cifre=0;
    while(n)
    {
        numar_cifre++;
        n/=10;
    }
    return numar_cifre-1;
}

int main(void)
{
    cin>>skipws>>linii>>coloane;
    cpos=3;
    for(int i=1;i<=coloane;i++)
    {
        cin.clear();
        cin.seekg(cpos);
        for(int j=1;j<=linii;j++)
        {
            cin>>skipws>>nr;
            cout<<nr<<" ";
            cin.seekg(cpos+nrc(nr)+coloane,ios::cur);
        }
        cpos++;
    }

}