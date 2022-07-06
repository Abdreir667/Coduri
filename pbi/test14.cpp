#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

char cuvant[256];

int main(void)
{
    cin>>cuvant;
    int nr=atoi(cuvant);
    int size=trunc(log10(nr))+1;
    if(strlen(cuvant)==size)
        cout<<"nu este un cuvant";
    else cout<<"este un cuvant";
}