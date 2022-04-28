#include <iostream> 

using namespace std;

#define my_love=LLONG_MAX;
 
int main()
{
    int n=7;
    char cata[n][n];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cata[i][j]='1';
    cata[1][4]='1';
    for(int i=1;i<=n;i++)
        cata[i][n/2+1]='0';
    for(int i=1;i<=n;i++)
        cata[n/2-1][i]='0';
    for(int i=n/2-1;i>=1;i--)
        for(int j=n/2+1;j>=2;j--)
            cata[i][j]='0';
    for(int i=n/2-1;i>=1;i--)
        for(int j=n/2+1;j<=n-1;j++)
            cata[i][j]='0';
    for(int i=n/2+1)
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<cata[i][j]<<"  ";
        cout<<endl;
    }
}
