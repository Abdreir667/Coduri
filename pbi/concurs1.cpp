#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream f("concurs.in");
    ofstream g("concurs.out");
    int c[51][1001]={},nr[51]={0},j,n,x=0,a,b,ult[51]={0},maxi=0,m1=0,m2=0,maxi2=0,k,o=0;;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>a>>b;
        c[a][b]=1;
        nr[a]++;
    }
    for(int i=1;i<=50;i++)
        if(nr[i])
          x++;
    cout<<x<<endl;
    for(int i=1;i<=50;i++)
        if(nr[i]!=0)
            cout<<nr[i]<<' ';
    cout<<' '<<endl;
    for(k=1;k<=n/2;k++)
    {
        m1=0;
        m2=0;
        for(int i=1;i<=50;i++)
            for(j=500;j>=1;j--)
                if(c[i][j]!=0)
                    ult[i]=j;
        for(int i=1;i<=50;i++)
            if(nr[i]>m2 && nr[i]!=0)
            {
                m1=m2;
                m2=i;
            }
        cout<<m1<<' '<<ult[m1]<<endl;
        cout<<m2<<' '<<ult[m2]<<endl;
        nr[m1]--;
        nr[m2]--;
    }
    return 0;
}