#include <fstream>
using namespace std;
ifstream f("prodmax.in");
ofstream g("prodmax.out");
short a[101],x,n,m,i,j;
void citire(void) 
{
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
                f>>x;
                if(x==2)
                    a[j]+=2;
                else if(x==1)
                    a[j]+=1;
                else
                    if(x==0)
                        a[j]=-101;
            }
}
int main()
{
    x=-1;
    citire();
    for(i=1;i<m;i++)
        x=max(x,a[i]);
    for(i=1;i<=m;i++)
        if(a[i]==x)
            g<<i<<' ';
}