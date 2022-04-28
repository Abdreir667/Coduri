#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream f("betasah.in");
    ofstream g("betasah.out");
    int n,k,d,x,y;
    f>>n>>d>>k;
    int lin[100+1],col[100+1];
    char tabla[100+1][100+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        tabla[i][j]='o';
    for(int i=1;i<=k+d;i++)
    {
        f>>x>>y;
        if(i<=d)
        {
            tabla[y][x]='d';
            lin[i]=x;
            col[i]=y;
        }
        if(i>d)
        tabla[y][x]='g';
    }
    int pmax,nralbe[n+1],p=0;
    for(int i=1;i<=n;i++)
    {
        pmax=i;
        for(int j=1;j<=i;j++)
        {
            if(tabla[j][i]=='g')
                pmax--;
        }
        nralbe[++p]=pmax;
    }
    sort(nralbe,nralbe+p);
    g<<nralbe[p]<<endl;
    int M=0;
    for(int i=1;i<=d;i++)
    {
        int q;
        int x1=lin[i],y1=col[i];
        int j=x1-1;
        while(tabla[y1][j]!='o' && j>=1)
        {
               M++
               j--;
        }
        j=x1+1;
        while(tabla[y1][j]!='o' && j<=n)
        {
            nrp++;
            j++;
        }
        j=y1-1;
        while(tabla[j][x1]!='o' && j>=1)
        {
            nrp++;
            j--;
        }
        j=y1+1;
        while(tabla[j][x1]!='o' && j<=x1)
        {
            nrp++;
            j++;
        }
        j=x1-1; q=y1-1;
            while (tabla[j][q]!='d')//directia 8

            { if(tabla[j][q]!='o') tabla[j][q]='g';//marchez cu 3 patratele accesibile

              j--; q--;}

            j=x1+1; q=y1+1;

            while (tabla[j][q]!=2)//directia 4

            { if(tabla[j][q]!=1) tabla[j][q]=3;

              j++; q++;}

        //pe diagonala 2-6

        j=x1-1; q=y1+1;

            while (tabla[j][q]!=2)//spre 2

            { if(tabla[j][q]!=1) tabla[j][q]=3;

              j--; q++;}

            j=x1+1; q=y1-1;

            while (tabla[j][q]!=2)//spre 6

            { if(tabla[j][q]!=1) tabla[j][q]=3;

              j++; q--;}
    }
    int P=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=i;j++)
       if(tabla[i][j]==3)P++;
    g<<M<<endl<<P<<endl;
    return 0;
}
