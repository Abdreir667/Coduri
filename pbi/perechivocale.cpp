#include <iostream>
#include <cstring>

using namespace std;

char cuvinte[256];

bool isvowel(char v) {
    return (0x208222>>(v&0x1f))&1;
}

short perechi=0;

int main(void)
{
    cin.getline(cuvinte, 256);
    for(int i=1;i<=strlen(cuvinte);i++)
        if(isvowel(cuvinte[i])==true && isvowel(cuvinte[i-1])==true)
            perechi++;
    cout<<perechi<<endl;
}