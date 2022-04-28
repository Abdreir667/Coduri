#include <iostream>

using namespace std;

#define love;

int main()
{
    int cata[100][100];
    int n=7;
    for(int i=1;i<=n-1;i++)
        for(int j=1;j<=n;j++)
            cata[i][j]=1;
    int cmax=n/2+1,cint=n/2,cmin=n/2-1,cmid=n/2+2;
    cata[cmin][cmax]=0;
    for(int i=cmin;i>=1;i--)
        for(int j=cmax-i;j>=cint;j--)
            cata[i][j]=0;
    for(int i=cmin;i>=1;i--)
        for(int j=cmax+i;j<=cmid;j++)
            cata[i][j]=0;
    int temp=2;
    for(int i=n;i>=cint;i--)
            cata[i][++temp]=0;
    temp=0;
    for(int i=cint;i>=1;i--)
        cata[i][++temp]=0;
    int o=0;
    temp=2;
    for(int i=1;i<=cmax;i++) 
    {
        cata[++temp][i]=0;
    }
    for(int i=1+o;i<=cmin+1;i++,o++)
        for(int j=cmax+=1;j<=cmax;j++)
            cata[i][j]=0;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n;j++) 
            cout<<cata[i][j]<<"  ";
        cout<<endl; 
    }
}