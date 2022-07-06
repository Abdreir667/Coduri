/// Se dă un şir format din n numere naturale distincte.
/// Calculați suma elementelor din secvenţa ce uneşte cel mai mic şi cel mai mare element din şir.

#include <iostream>
#include <fstream>

using namespace std;

int n, mini=2147483647, i, nr, maxi=0, s=0;
ifstream f("memory003.in");
ofstream g("memory003.out");

int main()
{
    f>>n;
    for(i=1; i<=n; i++)
    {
        f>>nr;
        if(nr>maxi)
            maxi=nr;
    }
    f.close();
    f.seekg(0,ios::beg);
    f>>n;
    for(i=1; i<=n; i++)
    {
        f>>nr;
        if(nr<mini)
            s=mini;
        if(nr>mini && nr<maxi)
            s=s+nr;
    }
    cout<<mini;
    return 0;
}