#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream f("betasah.in");
    ofstream g("betasah.out");
    int n,k,d,x,y,l,c,j,i1;
    f>>n>>d>>k;
    int lin[d+1],col[d+1];
    char a[n+1][n+1];
    int pozdama[103][3], albe[1003];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        a[i][j]='0';
    for(int i=1;i<=k+d;i++)
    {
        f>>x>>y;
        if(i<=d)
        {
            a[y][x]='1';
            lin[i]=x;
            col[i]=y;
        }
        if(i>d)
        a[y][x]='2';
    }
    int pmax,nralbe[n+1],p=0;
    for(int i=1;i<=n;i++)
    {
        pmax=i;
        for(int j=1;j<=i;j++)
        {
            if(a[j][i]=='2')
                pmax--;
        }
        nralbe[++p]=pmax;
    }
    sort(nralbe,nralbe+p);
    g<<nralbe[p]<<endl;
    int nrp=0;
    for(int i=1;i<=d;i++)

    {

        l=pozdama[i][1]; c=pozdama[i][2];

        //pe aceeasi linie

        j=c-1;

            while(a[l][j]!=2)//directia 7

            {

               if(a[l][j]==0)a[l][j]=3;

               j--;

            }

            j=c+1;

            while(a[l][j]!=2)//directia 3

            {

                if(a[l][j]==0)a[l][j]=3;

                j++;

            }

        //pe aceeasi coloana

          i1=l-1;

            while(a[i1][c]!=2)//directia 1

            {

                if(a[i1][c]==0)a[i1][c]=3;

                i1--;

            }

            i1=l+1;

            while(a[i1][c]!=2)//directia 5

            {

                if(a[i1][c]==0)a[i1][c]=3;

                i1++;

            }

        //pe diagonala 8-4

        i1=l-1; j=c-1;

            while (a[i1][j]!=2)//directia 8

            { if(a[i1][j]!=1) a[i1][j]=3;//marchez cu 3 patratele accesibile

              i1--; j--;}

            i1=l+1; j=c+1;

            while (a[i1][j]!=2)//directia 4

            { if(a[i1][j]!=1) a[i1][j]=3;

              i1++; j++;}

        //pe diagonala 2-6

        i1=l-1; j=c+1;

            while (a[i1][j]!=2)//spre 2

            { if(a[i1][j]!=1) a[i1][j]=3;

              i1--; j++;}

            i1=l+1; j=c-1;

            while (a[i1][j]!=2)//spre 6

            { if(a[i1][j]!=1) a[i1][j]=3;

              i1++; j--;}
    }
    int P=0;
    int M;
    for(int i=1;i<=n;i++)
    for(j=1;j<=i;j++)
       if(a[i][j]=='3')P++;
    g<<M<<endl<<P<<endl;
}
