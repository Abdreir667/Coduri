#include <fstream>

using namespace std;

ifstream cin("nrasoc.in");
ofstream cout("nrasoc.out");

int numere[81],aux[81],maxim[81]={0},dim=0,zre;

int main(void)
{
    while(cin >> zre)
        numere[++dim]=zre;
    for(int i=1;i<dim;i++,dim+=2)
    {
        for(int j=1;j<=dim;j++)
            aux[j]=numere[j];
        for(int k=0;k<=1;k++,dim--)
            for(int j=i;j<dim;j++)
                aux[j]=aux[j+1];
        for(int j=1;j<=dim;j++)
            if(aux[j]>maxim[j])
            {
                for(int k=1;k<=dim;k++)
                    maxim[k]=aux[k];
                break;
            }
    }
    for(int i=1;i<=dim-2;i++)
        cout<<maxim[i]<<" ";
}