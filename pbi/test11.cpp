#include <fstream>
#include <bitset>
using namespace std;
ifstream f("cifre13.in");
ofstream g("cifre13.out");
int n,m,c,i,j,t,k,q;
bitset<2000>  a[1010][1010]={0};
int main()
{
    f>>n>>m>>c;
    for(k=1;k<=c;k++)
    {
        f>>t>>i>>j;  
        switch(t)
        {
            case 0:
            {
                a[i][j+1]=a[i][j+2]=1;
                a[i+1][j]=a[i+1][j+3]=1;
                a[i+2][j]=a[i+2][j+3]=1;
                a[i+3][j]=a[i+3][j+3]=1;
                a[i+4][j]=a[i+4][j+3]=1;
                a[i+5][j]=a[i+5][j+3]=1;
                a[i+6][j+1]=a[i+6][j+2]=1;
                break;
            }  
            case 1:
            {
                a[i][j+2]=1;
                a[i+1][j+1]=a[i+1][j+2]=1;
                a[i+2][j]=a[i+2][j+2]=1;
                a[i+3][j+2]=1;
                a[i+4][j+2]=1;
                a[i+5][j+2]=1;
                a[i+6][j+1]=a[i+6][j+2]=a[i+6][j+3]=1;
                break;
            }      
            case 2:
            {
                a[i][j+1]=a[i][j+2]=1;
                a[i+1][j]=a[i+1][j+3]=1;
                a[i+2][j]=a[i+2][j+3]=1;
                a[i+3][j+2]=1;
                a[i+4][j+1]=1;
                a[i+5][j]=1;
                a[i+6][j]=a[i+6][j+1]=a[i+6][j+2]=a[i+6][j+3]=1;
                break;
            }    
            case 3:
            {
                a[i][j+1]=a[i][j+2]=1;
                a[i+1][j]=a[i+1][j+3]=1;
                a[i+2][j]=a[i+2][j+3]=1;
                a[i+3][j+2]=1;
                a[i+4][j]=a[i+4][j+3]=1;
                a[i+5][j]=a[i+5][j+3]=1;
                a[i+6][j+1]=a[i+6][j+2]=1;  
                break;
            }
            case 4:
            {
                a[i][j+2]=1;
                a[i+1][j+1]=1;
                a[i+2][j]=1;
                a[i+3][j]=a[i+3][j+1]=a[i+3][j+2]=a[i+3][j+3]=1;
                a[i+4][j+2]=1;
                a[i+5][j+2]=1;
                a[i+6][j+2]=1;
                break;
            }
            case 5:
            {
                a[i][j+1]=a[i][j+2]=a[i][j+3]=1;
                a[i+1][j]=1;
                a[i+2][j]=1;
                a[i+3][j+1]=a[i+3][j+2]=1;
                a[i+4][j+3]=1;
                a[i+5][j]=a[i+5][j+3]=1;
                a[i+6][j+1]=a[i+6][j+2]=1;
                break;
            }
            case 6:
            {
                a[i][j+1]=a[i][j+2]=1;
                a[i+1][j]=a[i+1][j+3]=1;
                a[i+2][j]=1;
                a[i+3][j]=a[i+3][j+1]=a[i+3][j+2]=1;
                a[i+4][j]=a[i+4][j+3]=1;
                a[i+5][j]=a[i+5][j+3]=1;
                a[i+6][j+1]=a[i+6][j+2]=1;
                break;
            }
            case 7:
            {
                a[i][j]=a[i][j+1]=a[i][j+2]=a[i][j+3]=1;
                a[i+1][j+3]=1;
                a[i+2][j+2]=1;
                a[i+3][j+2]=1;
                a[i+4][j+1]=1;
                a[i+5][j+1]=1;
                a[i+6][j+1]=1; 
                break;
            }
            case 8:
            {
                a[i][j+1]=a[i][j+2]=1; 
                a[i+1][j]=a[i+1][j+3]=1;
                a[i+2][j]=a[i+2][j+3]=1;
                a[i+3][j+1]=a[i+3][j+2]=1;
                a[i+4][j]=a[i+4][j+3]=1;
                a[i+5][j]=a[i+5][j+3]=1;
                a[i+6][j+1]=a[i+6][j+2]=1;
                break;
            }
            case 9:
            {
                a[i][j+1]=a[i][j+2]=1; 
                a[i+1][j]=a[i+1][j+3]=1;
                a[i+2][j]=a[i+2][j+3]=1;
                a[i+3][j+1]=a[i+3][j+2]=a[i+3][j+3]=1;
                a[i+4][j+3]=1;
                a[i+5][j]=a[i+5][j+3]=1;
                a[i+6][j+1]=a[i+6][j+2]=1;
                break;
            }
        }    
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]!=0)
                q++;
    g<<q;
}