#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("concurs.in");
    ofstream g("concurs.out");
    int nr[51]= {0}, j, e, i, nj=0, p, mat[51][1001]= {0}, ult[51]= {0}, k, max1=-1, max2=-1, pmax1, pmax2, dimnr=51;;
    f>>p;
    for(i=1; i<=p; i++)
    {
        f>>j>>e;
        mat[j][e]=1;
        nr[j]++;
    }
    f.close();
    for(i=1; i<=51; i++)
        if(nr[i]!=0)
            nj++;
    g<<nj<<endl;
    for(i=1; i<=51; i++)
        if(nr[i]!=0)
            g<<nr[i]<<" ";
    g<<endl;
    for(i=1; i<=p/2; i++)
    {
        for(i=1; i<=51; i++)
            for(k=1001; k>=1; k--)
                if(mat[i][k]==1)
                    ult[i]=k;
        for(i=1; i<=dimnr; i++)
            if(nr[i]!=0)
                if(nr[i]>max1)
                {
                    max1=nr[i];
                    pmax1=i;
                }
        for(i=pmax1; i<dimnr; i++)
            nr[i]=nr[i+1];
        dimnr--;
        for(i=1; i<=dimnr; i++)
            if(nr[i]!=0)
                if(nr[i]>max2)
                {
                    max2=nr[i];
                    pmax2=i;
                    if(pmax2<pmax1)
                        pmax2=i;
                    else
                        pmax2=i+1;
                }
        g<<pmax1<<" "<<ult[pmax1]<<endl<<pmax2<<" "<<ult[pmax2]<<endl;
    }
}