#include <iostream>

using namespace std;

short m, n, i, j, t=0, s, d, x[100][100]= {0}, aux;
bool prim1, prim2;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>x[i][j];
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            t++;
            prim1=true;
            s=0;
            prim2=true;
            if(x[i][j]==1 || x[i][j]==0)
                prim1=false;
            else
            {
                for(d=2;d*d<=x[i][j];d++)
                    if(x[i][j]%d==0)
                    {
                        prim1=false;
                        break;
                    }
            }
            if(prim1==false)
            {
            int aux=x[i][j];
            while(aux!=0)
            {
                s+=aux%10;
                aux/=10;
            }
            if(s==1 || s==0)
                prim2=false;
            else
            {
                for(d=2;d*d<=s;d++)
                    if(s%d==0)
                    {
                        prim2=false;
                        break;
                    }
            }
            }
            if(prim1==true)
            {
                t++;
                if(i==1 && j==1)
                    x[i][j]=0;
                else
                {
                    t++;
                   x[i][j]=0;
                if(j>1)
                    j--;
                if(i>1)
                    i--;
                }
            }
            else if(prim2==true)
            {
                t++;
                if(i==n && j==m)
                    x[i][j]=0;
                else
                {
                    t++;
                    x[i][j]=0;
                if(j<m)
                    j++;
                if(i<n)
                    i++;
                }
            }
        }
    
    cout<<t;
    return 0;
}