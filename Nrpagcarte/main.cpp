#include <iostream>

using namespace std;

int main()
{
    int pag,cif;
    cout<<"pag=";cin>>pag;
    if(pag<=9)
    cif=pag;
    if(pag<=99)
    cif=2*(pag-9)+9;
    if(pag<=999)
    cif=3*(pag-99)+180;
    cout<<"Nr de cifre="<<cif;

    return 0;
}
