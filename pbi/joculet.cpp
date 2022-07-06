#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <random>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int mat[7][7]={0};
int n;
int lin_in=1,col_in=1;
int maxi=6,mini=1;

int generare_linie(void)
{
    int x;
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<std::mt19937::result_type> dist6(1,6); // distribution in range [1, 6]
    return dist6(rng);
}

void afisare(void)
{
    for(int i=1;i<=6;i++,printf("\n"))
        for(int j=1;j<=6;j++)
           printf("%d ",mat[i][j]);
}

int get_key(void)
{
    int c;
    c = 0;
    while(1)
    {
        switch((c=getch())) {
            case KEY_UP:
            {
                lin_in--;
                return 0;//sus
            }
            case KEY_DOWN:
            {
                lin_in++;
                return 0;//jos
            }
            case KEY_LEFT:
            {
                col_in--;
                return 0;
            }
            case KEY_RIGHT:
            {
                col_in++;
                return 0;
            }
        }
    }
}

int main()
{
    printf("Dati un numar de puncte pe care sa le strangeti:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int lin=generare_linie();
        int col=generare_linie();
        mat[lin][col]=1;
    }
    int k=0;
    mat[1][1]=9;
    afisare();
    mat[1][1]=0;
    while(k!=n)
    {
        int ant_lin=lin_in,ant_col=col_in;
        get_key();
        if(mat[lin_in][col_in]==1 || mat[lin_in][col_in]==n)
            k++;
        mat[lin_in][col_in]=9;
        mat[ant_lin][ant_col]=0;
        system("CLS");
        afisare();
    }
    return 0;
}