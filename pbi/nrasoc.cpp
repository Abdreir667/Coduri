#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("nrasoc.in");
    ofstream g("nrasoc.out");
    int n,tab[1000],temp=0,nr1,nr2;
    bool conditie1=false,conditie2=false;
    while(f>>n)
    {
        tab[temp]=n;
        temp++;
    }
    for(int i=0;i<=temp-1 && conditie1==false;i++)
        {
            nr1=0,nr2=0;
            nr1=tab[i]*10+tab[i+1];
            nr2=tab[i+2]*10+tab[i+3];
            if(nr2>nr1)
                conditie1=true;
        }
    for(int i=0;i<=temp-1 && conditie2==false;i++)
    {
        if(tab[i]==nr1/10 && tab[i+1]==nr1%10)
        {
            int temp2=i;
            for(int k=1;k<=2;k++)
                for(int j=temp2;j<=temp-2;j++)
                    tab[j]=tab[j+1];
        }
    }
    for(int i=0;i<=temp-3;i++)
        g<<tab[i]<<" ";
}
