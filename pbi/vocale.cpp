#include <iostream>
#include <cstring>

using namespace std;

char cuvant[21];

bool isvowel(char v) {
    return (0x208222>>(v&0x1f))&1;
}

int main(void)
{
    cin.getline(cuvant,21);
    for(int i=0;i<=strlen(cuvant);i++)
        if(isvowel(cuvant[i])==true)
            cuvant[i] =toupper(cuvant[i]);
    cout<<cuvant;
}
