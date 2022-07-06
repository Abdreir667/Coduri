#include <fstream>

using namespace std;

int mat[101][101],n,s;
int elemente[101];

ifstream cin("tablou.in");
ofstream cout("tablou.out");

int main(void)
{
    cin>>n>>s;
    int suma_linii=s/n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
            elemente[i]=1;
        if(i==2)
            elemente[i]=suma_linii-2*n;
    }
}