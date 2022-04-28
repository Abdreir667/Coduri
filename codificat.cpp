#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,nr,arr[1000],max=0;
    ifstream f("codat.in");
    ofstream g("codat.out");
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        arr[i]=nr;
        if(nr>=max)
            max=nr;
    }
    f.clear();
    f.seekg(0,ios::beg);
    f>>n;

}