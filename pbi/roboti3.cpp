#include <fstream>
#include <algorithm>
using namespace std;

ifstream f("roboti2.in");
ofstream g("roboti2.out");
long l=1,maxi=1,n,v,a[1000000],i,ok=0,rez[100000],p=1;
int main()
{
    f>>v>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    if(v==1)
    {
        i=2;
        while(ok<2 && i<=n)
        {
            if(a[i]>a[i-1])
                l++;
            else
            {
                if(l>maxi)
                    maxi=l;
                l=1;
            }
            i++;
             if(i==n+1)
             {
                 if(a[1]>a[i-1])
                 {
                     l++;
                     i=2;
                 }
                 ok++;
             }
        }
        g<<maxi;
    }
    else
    {
        int q=n+1;
        sort(a+1,a+n+1);
        rez[p]=rez[q]=a[1];
        i=2;
        while(i<=n)
        {
            if(rez[p]<=rez[q])
            {
                rez[p+1]=a[i];
                p++;
            }
            else
            {
                rez[q-1]=a[i];
                q--;
            }
            i++;
        }       
        for(i=1;i<=n;i++)
        g<<rez[i]<<' ';
    }
}