#include <iostream>
#include <cstring>

using namespace std;

char afisare[1000];
char cuvant[256];

int main(void)
{

    cin.getline(cuvant,256);
    cuvant[0]=toupper(cuvant[0]);
    for(int i=1;i<=strlen(cuvant);i++)
    {
        if(cuvant[i-1]==' ' || cuvant[i+1]==' ')
            cuvant[i]=toupper(cuvant[i]);
    }
    cuvant[strlen(cuvant)-1]=toupper(cuvant[strlen(cuvant)-1]);
    cout<<cuvant;
}