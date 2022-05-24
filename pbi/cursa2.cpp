#include <iostream>
#include <fstream>
using namespace std;
int a[501][501];
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int i, j,t=0;
    for (i = 1;i <= n;i++)
        for (j = 1;j <= m;j++)
            cin >> a[i][j];
    /*for (i = 1;i <= n;i++) {
        for (j = 1;j <= m;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }*/
    for (i = 1;i <= n;i++)
        for (j = 1;j <= m;j++)
        {
            t++;
            bool perf = true,prim=true;
            for (int d = 2;d*d <= a[i][j];d++)
                if (a[i][j] % d == 0)
                {
                    prim=false;
                    break;
                }
            if(prim==false)
            {
                int cop = a[i][j];
                int s = 0;
                while (cop)
                {
                    s = s + cop % 10;
                    cop = cop / 10;
                }
                for (int d = 2;d *d<= s;d++)
                    if (s % d == 0)
                    {
                        perf = false;
                        break;
                    }
                if(s==0 || s==1)
                    perf=false;
            }
            else if(prim==false && perf==false)
                a[i][j]=-1;
            if( a[i][j]<=1)
            {
                prim=false;
                perf=false;
            }
            if (prim==true && a[i][j]!=-1)
            {
                if(i==1 && j==1)
                    a[i][j]=-1;
                else {
                t++;
                a[i][j] = -1;
                if (i>1)
                    i--;
                if (j>1)
                    j--;
                }
                
            }
            else if (perf == true && a[i][j]!=-1)
            {
                if(i==n && j==m)
                    a[i][j]=-1;
                else
                {
                    t++;
                a[i][j] = -1;
                if (i<n)
                    i++;
                if (j<m)
                    j++;
                }
                
            }
        }
    cout<< t;
    return 0;
}