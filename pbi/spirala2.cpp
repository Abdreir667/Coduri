#include <fstream>
#include <iomanip>

using namespace std;

ifstream cin("spirala2.in");
ofstream cout("spirala2.out");

int m,n,mat[501][501],afisare=0,k;
int aux_mat[501][501];
short cerinta;
long long suma=0;

int main()
{
    cin>>cerinta>>m>>k;
    int p=m*m;
    int k=1;
    while(afisare<p)
    {
        for(int i=k;i<=m-k+1 && afisare<=p;i++)
            mat[k][i]=++afisare;
        for(int i=k+1;i<=m-k+1 && afisare<=p;i++)
            mat[i][m-k+1]=++afisare;
        for(int i=m-k;i>=k && afisare<=p;i--)
            mat[m-k+1][i]=++afisare;
        for(int i=m-k;i>k && afisare<=p;i--)
            mat[i][k]= ++afisare;
            k++;
    }
    switch(cerinta)
    {
        case 1:
        {
            for(int i=1;i<=m;i++)
            {
                if(i!=k)
                {
                    suma+=mat[i][k]%100003;
                    suma+=mat[k][i]%100003;
                }
            }
            cout<<suma<<" ";
            break;
        }
        case 2:
        {
            int temp_lin=1,temp_col=1;
            k=m-k+1;
            for(int i=1;i<=m;i++)
                swap(mat[i][k],mat[k][i]);
            for(int i=1;i<=m;i++,cout<<"\n")
                for(int j=1;j<=m;j++)
                    cout<<mat[i][j]<<" ";
            break;
        }
    }
}
