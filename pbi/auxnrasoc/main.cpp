#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("date.int");
    ofstream g("date.out");
    int nrc=0,nrf=0,n;
    while(f>>n)
        nrc++;
    f.clear();
    f.seekg(0,ios::beg);
    for(int i=0;i<=nrc-1;i++)
    {
        f>>n;
        nrf=nrf*10+n;
    }
    cout<<nrf<<endl;

}
