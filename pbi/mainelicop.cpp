#include <iostream>
#include <fstream>

using namespace std;

bool a[101][101];
short k,m,n,q,l1,c1,l2,c2,t,zero,unu,nr1,nr2,v[41],p=0;
int i,j;

int main()
{
    ifstream f("elicop.in");
    ofstream g("elicop.out");
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    f>>k;
    for(q=1; q<=k; q++)
    {
        f>>l1>>c1>>l2>>c2>>t;
        zero=0; unu=0;
        if(l2 > l1)
        {
            swap(l1,l2);
            swap(c1,c2);
        }
        if(c1 > c2)
        {
            if(t==-1)
            {
                for(i=l1; i>=l2; i--)
                {
                    for(j=c1; j>=c2; j--)
                    {
                        if(a[i][j] == false)zero++;
                        else unu++;
                    }
                    c1--;
                }
            }
            else
            {
                for(i=l2; i<=l1; i++)
                {
                    for(j=c2; j<=c1; j++)
                    {
                        if(a[i][j] == false)zero++;
                        else unu++;
                    }
                    c2++;
                }
            }
        }
        else{
            if(t==1)
            {
                for(i=l2; i<=l1; i++)
                {
                    for(j=c2; j>=c1; j--)
                    {
                        if(a[i][j] == false)zero++;
                        else unu++;
                    }
                    c2--;
                }
            }
            else{
                for(i=l1; i>=l2; i--)
                {
                    for(j=c1; j<=c2; j++)
                    {
                        if(a[i][j] == false)zero++;
                        else unu++;
                    }
                    c1++;
                }
            }
        }
        if(zero==0 && unu>0)nr1++;
        else if(zero>unu)
        {
            nr2++;
            v[p] = q;
            p++;
        }

    }
    g<<nr1<<'\n';
    g<<nr2<<" ";
    for(i=0; i<p; i++)
        g<<v[i]<<" ";
    f.close();
    g.close();
}
