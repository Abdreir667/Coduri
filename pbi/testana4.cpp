#include <fstream>

using namespace std;

int x[10002];
int n, i, l, lmax=1, cnt, st, dr;


ifstream f("secvcresc.in");
ofstream g("secvcresc.out");

int main()
{
    f>>n;
    for(i=1; i<=n; i++)
        f>>x[i];
    for(i=n; i>1;i--)
    {
        if(x[i]>x[i-1])
        {
            l=1;
            int k=i;
            while(x[k]>x[k-1])
            {
                l++;
                k--;
            }
            if(l>=lmax)
            {
                lmax=l;
                dr=i;
                st=k;
            }
            i=k;
        }
    }
    g<<st<<" "<<dr;
    return 0;
}