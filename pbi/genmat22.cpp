/// Scrieți un program care citește de la tastatură un număr natural n și construiește o matrice
/// cu 3*n linii și 3*n coloane, împărțită în n*n zone, numerotate de la 1 la n*n, de sus în jos
/// și de la stânga la dreapta. Fiecare zonă ocupă 3 linii și 3 coloane și va conține pe diagonale
/// numărul său de ordine, restul elementelor fiind egale cu 0.

#include <iostream>

using namespace std;

int a[101][101], n, i, j, nr=0, nrz=1, z, zone[1000000], l, c, i1;

int main()
{
    cin>>n;
    for(z=1; z<=n*n; z++)
    {
        for(i=1; i<=9; i=i+2)
        {
            zone[++nr]=nrz;
            if(i<9)
                zone[++nr]=0;
        }
        nrz++;
    }
    nr=1;
    for(i=1; i<=3*n; i++)
    {

        for(j=1; j<=3*n;)
            if(zone[nr]!=-1)
            {
                a[i][j]=zone[nr];
                zone[nr]=-1;
                a[i][++j]=zone[++nr];
                zone[nr]=-1;
                a[i][++j]=zone[++nr];
                zone[nr]=-1;
                nr=nr+7;
                j++;
            } else nr++;
            nr=1;
    }

    for(i=1; i<=3*n; i++)
    {
        for(j=1; j<=3*n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}