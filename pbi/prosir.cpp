#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("prosir.in");
ofstream cout("prosir.out");

char cuvant[210];

int main(void)
{
    cin.getline(cuvant,210);
    for(int i=0;i<=strlen(cuvant);i++)
    {
        if(cuvant[i+1]==' ' || cuvant[i+1]=='.')
            cuvant[i]='5';
        while(cuvant[i+1]==' ')
            i++;
    }
    cout<<cuvant;
}