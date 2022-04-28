#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int m,n;
    ifstream f("elicop.in");
    ofstream g("elicop.out");
    f>>m>>n;
    bool matrice1[101][101];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            f>>matrice1[i][j];
    int nr,l1,c1,l2,c2,p;
    f>>nr;
    for(int i=1;i<=nr;i++)
    {
        f>>l1>>c1>>l2>>c2>>p;
        if(p==1)
        {
            if()
        }
    }
    
}