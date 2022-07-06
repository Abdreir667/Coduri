/// Se dă o matrice cu m linii şi n coloane, având elementele numere naturale nenule.
/// Parcurgând matricea pe coloane de sus în jos şi de la stânga la dreapta,
/// determinaţi lungimea maximă a unei secvenţe de numere prime.

#include <iostream>
#include <fstream>

using namespace std;

short m, n, i, j, nr,secv1[1001]={0},secv2[1001]={0},lung[1001]={0};
bool prim,gasit[1001]={0};
long long secvmax=0,secvcrt=0;

ifstream f("memory004.in");
ofstream g("memory004.out");

///secv1==lungimea de la inceput
///secv2==lungimea de la final


int main()
{
    f>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;i++)
        {
            f>>nr;
            if(nr<=1)
                prim==false;
            else
            {
                prim=true;
                for(int k=2;k*k<=nr && prim==true;k++)
                    if(nr%k==0)
                        prim==false;
            }
            if(prim==true)
            {
                if(gasit[j]==false)
                    secv1[j]++;
                secv2[j]++;
                lung[j]++;
            }
            else if(prim==false)
            {
                gasit[j]=true;
                if(j==1)
                    secv1[j]=1;
                if(lung[j]>secvmax)
                    secvmax=lung;
                secv2[j]=0;
                lung[j]=0;
            }
        }
    secvcrt=0;
    cout<<"svveps"<<endl;
    for(j=1; j<=n; j++)
    {
        if(secv1[j+1]!=0 && secv2[j]!=0)
        {
            secvcrt=secv1[j]+secv2[j];
            if(secv1[j+2]!=0 && secv2[j+1]==n)
            {
                int k=j+2;
                while(secv1[k]!=0 && secv2[k-1]==n)
                {
                    secvcrt+=secv1[k];
                    k++;
                }
            }
        }
        
    }
    g<<secvmax;
    return 0;
}