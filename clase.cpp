#include <iostream>
#include <fstream> 
/*5
16 17 20 24 30
4
78 20 17 74*/
using namespace std;

int main()
{
    ifstream f("clase.in");
    ofstream g("clase.out");
    int n,m,arr[1000],arr1[1000],nrc=0;
    f>>n;
    for(int i=1;i<=n;i++)
        f>>arr[i];
    f>>m;
    for(int i=1;i<=m;i++)
        f>>arr1[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            if(arr[i]==arr1[j])
            {
                nrc++;
            }
    }
    g<<nrc<<endl;
}
