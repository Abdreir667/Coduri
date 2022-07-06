#include <iostream>
#include <cstring>

using namespace std;

char cuvant[256];

int main(void)
{
    cin.getline(cuvant,256);
    for(int i=1;i<=strlen(cuvant);i++)
    {
        if(cuvant[i]!=' ')
        {
            while(cuvant[i]!=' ')
                cout<<cuvant[i],i++;
        }
        else if(cuvant[i]==' ' && i!=1)
        {
            cout<<' ';
            while(cuvant[i]!=' ')
                i++;
        }
    }
}