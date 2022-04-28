#include <iostream>
#include <fstream>
/*10
3 4 4 8
1 2 5 6 7 9 10*/
using namespace std;

int main()
{
    int n,nmin,nmax,nre=1,min;
    ifstream f("numere25.in");
    ofstream g("numere25.out");
    f>>n;
    f>>min;
    while(f>>n)
        nre++;
    f.clear();
    f.seekg(0,ios::beg);
    cout<<nre<<endl;
    f>>n;
    f>>nmin;
    for(int i=1;i<min;i++)
        g<<i<<" ";
    f>>nmin;
    for(int i=1;i<=nre-1;i++)
    {
        f>>nmax;
        if(nmin!=nmax)
        for(int j=nmin+1;j<nmax;j++)
            g<<j<<" ";
        nmin=nmax;
    }
    for(int i=nmax+1;i<=n;i++)
        g<<i<<" ";

    
}