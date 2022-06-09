#include <fstream>
#include <iomanip>
#include <bitset>

using namespace std;

ifstream cin("cifre13.in");
ofstream cout("cifre13.out");

int linii,coloane,intrebari;
int cifra,linie,coloana,nre=0;
bitset<2000> mat[2001];

void patru(int lin,int col)
{
    col+=2;
    mat[lin][col]=1;
    for(int i=1;i<=2;i++)
        mat[++lin][--col]=1;
    mat[++lin][col]=1;
    for(int i=1;i<=3;i++)
        mat[lin][++col]=1;
    col--;
    for(int i=1;i<=3;i++)
        mat[++lin][col]=1;
    
}

void sase(int lin,int col)
{
    int lin_aux=lin,col_aux=col;
    for(int i=1;i<=5;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux=lin+3;
    for(int i=1;i<=2;i++)
        mat[lin_aux][++col_aux]=1;
    lin_aux++,col_aux++;
    for(int i=1;i<=2;i++)
        mat[lin_aux++][col_aux]=1;
    for(int i=1;i<=2;i++)
        mat[lin_aux][--col_aux]=1;
    lin_aux=lin--,col_aux=col++;
    for(int i=1;i<=2;i++)
        mat[lin_aux][++col_aux]=1;
    mat[++lin_aux][++col_aux]=1;

}

void unu(int lin,int col)
{
    int lin_aux=lin,col_aux=col+2;
    mat[lin_aux][col_aux]=1;
    for(int i=1;i<=6;i++)
        mat[++lin_aux][col_aux]=1;
    mat[lin_aux][--col_aux]=mat[lin_aux][col_aux+1]=1;
    col_aux=col+2;
    for(int i=1;i<=2;i++)
        mat[++lin][--col_aux]=1;
}

void doi(int lin,int col)
{
    int lin_aux=lin,col_aux=col;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col]=1;
    for(int i=1;i<=2;i++)
        mat[lin][++col_aux]=1;
    col_aux++,lin_aux=lin;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    for(int i=1;i<=3;i++)
        mat[++lin_aux][--col_aux]=1;
    mat[++lin_aux][col_aux]=1;
    for(int i=1;i<=3;i++)
        mat[lin_aux][++col_aux]=1;
}

void trei(int lin,int col)
{
    int lin_aux=lin,col_aux=col;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux=lin;
    for(int i=1;i<=2;i++)
        mat[lin_aux][++col_aux]=1;
    col_aux++;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    col_aux--;
    mat[lin_aux][col_aux]=1;
    col_aux++;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[lin_aux][--col_aux]=1;
}

void opt(int lin,int col)
{
    int lin_aux=lin,col_aux=col;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux=lin;
    for(int i=1;i<=2;i++)
        mat[lin_aux][++col_aux]=1;
    col_aux++;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[lin_aux][--col_aux]=1;
    col_aux+=2;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[lin_aux][--col_aux]=1;
}

void cinci(int lin,int col)
{
    int lin_aux=lin,col_aux=col;
    for(int i=1;i<=3;i++)
        mat[lin_aux][++col_aux]=1;
    col_aux=col;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[lin_aux][++col_aux]=1;
    col_aux++;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[lin_aux][--col_aux]=1;
    mat[--lin_aux][--col_aux]=1;
}

void sapte(int lin,int col)
{
    int lin_aux=lin,col_aux=col;
    mat[lin][col]=1;
    for(int i=1;i<=3;i++)
        mat[lin][++col_aux]=1;
    mat[++lin_aux][col_aux]=1;
    col_aux--;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    col_aux--;
    for(int i=1;i<=3;i++)
        mat[++lin_aux][col_aux]=1;
}

void noua(int lin,int col)
{
    int lin_aux=lin,col_aux=col;
    for(int i=1;i<=2;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux=lin;
    for(int i=1;i<=2;i++)
        mat[lin_aux][++col_aux]=1;
    col_aux++;
    for(int i=1;i<=5;i++)
        mat[++lin_aux][col_aux]=1;
    lin_aux++;
    for(int i=1;i<=2;i++)
        mat[lin_aux][--col_aux]=1;
    mat[--lin_aux][--col_aux]=1;
    lin_aux=lin+3;
    col_aux=col;
    for(int i=1;i<=2;i++)
        mat[lin_aux][++col_aux]=1;
}

void zero(int lin,int col)
{
    for(int i=1;i<=2;i++)
        mat[lin][++col]=1;
    col++;
    for(int i=1;i<=5;i++)
        mat[++lin][col]=1;
    lin++;
    for(int i=1;i<=2;i++)
        mat[lin][--col]=1;
    col--;
    for(int i=1;i<=5;i++)
        mat[--lin][col]=1;
}

int main(void)
{
    cin>>linii>>coloane>>intrebari;
    for(int i=1;i<=intrebari;i++)
    {
        cin>>cifra>>linie>>coloana;
        switch(cifra)
        {
            case 0:
            {
                zero(linie,coloana);
                break;
            }
            case 1:
            {
                unu(linie,coloana);
                break;
            }
            case 2:
            {
                doi(linie,coloana);
                break;
            }
            case 3:
            {
                trei(linie,coloana);
                break;
            }
            case 4:
            {
                patru(linie,coloana);
                break;
            }
            case 5:
            {
                cinci(linie,coloana);
                break;
            }
            case 6:
            {
                sase(linie,coloana);
                break;
            }
            case 7:
            {
                sapte(linie,coloana);
                break;
            }
            case 8:
            {
                opt(linie,coloana);
                break;
            }
            case 9:
            {
                noua(linie,coloana);
                break;
            }
        }
    }
    for(int i=1;i<=linii;i++)
    {
        for(int j=1;j<=coloane;j++)
        {
            cout<<setw(3)<<mat[i][j]<<" ";
            if(mat[i][j]==1)
                nre++;
        }
        cout<<endl;
    }
    cout<<nre<<endl;
    
}