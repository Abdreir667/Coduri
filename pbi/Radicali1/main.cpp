#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
    float x,p=1.00,radf;
    int m,n,tab1[5000],tab2[5000],nre,nret=0,nreo=0,jt=0,rat=1;
    ifstream f("radicali.in");
    ofstream g("radicali.out");
    f>>m;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>x;
        p=p*x;
    }
    radf=std::pow(p,1.0/m);
    if(floor(radf)==radf)
        {
            g<<"1"<<endl;
            nret=0;
            nreo=0;
            int radf1=floor(radf);
             for(int j=2;j<=radf;j++)
             {
                nre=0;
                if(radf1%j==0)
                {
                    jt++;
                    while(radf1%j==0)
                    {
                         nre++;
                         nret++;
                        radf1=radf1/j;
                    }
                }
                if(nre!=0)
                    {
                        tab1[rat]=j;
                        tab2[rat]=nre;
                        rat++;
                    }
             }

        }
    else
        g<<"0"<<endl;
    for(int j=1;j<=jt;j++)
    {
        g<<tab1[j]<<" ";
        g<<tab2[j]<<endl;
    }
    f.close();
    g.close();
    return 0;
}
