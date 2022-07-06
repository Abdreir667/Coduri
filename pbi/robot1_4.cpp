#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("robot1.in");
    ofstream g("robot1.out");
    int n, m, l, c, i, energant, energcrt, j, laux, caux,lin,col;
    char comm, commaux;
    f>>n>>m>>l>>c;
    lin=l;
    col=c;
    for(i=1; i<=m; i++)
        f>>commaux;
    for(i=1; i<=(l-1)*n+c; i++)
        f>>energant;/// energia initiala
    f.close();
    for(i=1; i<=m; i++)
    {
         f.open("robot1.in");
         f>>n>>m>>laux>>caux;
         for(j=1; j<=i; j++)
            f>>comm;
         f.close();
         f.open("robot1.in");
         f>>n>>m>>laux>>caux;
         for(j=1; j<=m; j++)
            f>>commaux;
         if(comm=='N')
            l=l-1;
         else
            if(comm=='S')
                l=l+1;
         else
            if(comm=='E')
                c=c+1;
         else
            c=c-1;
        energant--;
        for(j=1; j<=(l-1)*n+c; j++)
            f>>energcrt;
        energant=energant+energcrt;
        if(energant==0)
            break;
        else if(energant==-1)
        {
            l=lin;
            c=col;
            break;
        }
        f.close();
    }
    g<<l<<" "<<c;
    return 0;
}