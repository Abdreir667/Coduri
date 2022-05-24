#include <iostream>
#include <fstream>
using namespace std;
int n, m, tab1[100001], tab2[100001];
ifstream f("interclasare.in");
ofstream g("interclasare.out");
int rez[200002];
int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> tab1[i];
    f >> m;
    for (int i = 1; i <= m; i++)
        f >> tab2[i];
    int x = 1, y = 1,chestie=0;
    while (x <= n and y <= m)
    {
        if (tab1[x] < tab2[y])
            rez[++chestie] = tab1[x++];
        else
            rez[++chestie] = tab2[y++];
    }
    if (x-1 == n)
        for (;y <= m;y++)
            rez[++chestie] = tab2[y];
    if (y-1 == m)
        for (;x <= n;x++)
            rez[++chestie] = tab1[x];
    for (int i = 1;i <= chestie;i++)
    {
            g<<rez[i]<<" ";
            if (i%10==0)
                    g<<endl;
    }
}