#include <iostream>

using namespace std;

int main()
{
    int n,nrc=0;
    cout<<"Dati un numar natural"<<"\n";
    cout<<"n=";cin>>n;
    do
    {
        n=n/10;
        nrc=nrc+1;
    }
    while(n>0);
        cout<<"Numarul a avut "<<nrc<<" cifre";


    return 0;
}
