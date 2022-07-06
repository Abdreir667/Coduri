#include <stdio.h>
#include <cstring>
#include <stdlib.h>

using namespace std;

char mat[4][4];
bool sa_verific = false;
bool ocupat[4][4] = { 0 };

void afisare(void)
{
    for (int i = 1;i <= 3;i++, printf("\n"))
        for (int j = 1;j <= 3;j++)
        {
            if(mat[i][j]!='1')
                printf("%c ", mat[i][j]);
            else printf("  ");
        }
}

bool verificare(void)
{
    for (int i = 1;i <= 3;i++)
        if (mat[i][1] == mat[i][2] && mat[i][2] == mat[i][3])
            return 1;
    for (int i = 1;i <= 3;i++)
        if (mat[1][i] == mat[2][i] && mat[2][i] == mat[3][i])
            return 1;
    if (mat[1][1] == mat[2][2] && mat[2][2] == mat[3][3])
        return 1;
    if (mat[1][3] == mat[2][2] && mat[2][2] == mat[3][1])
        return 1;
    return 0;
}

int main(void)
{
    int linie, coloana;
    for (int i = 1;i <= 3;i++)
        for (int j = 1;j <= 3;j++)
            mat[i][j] = '1';
    for (int i = 1;i <= 9;i++)
    {
        if (i == 5)
            sa_verific = true;
        if (i % 2 == 1)
        {
            bool apartine = true;
            printf("Este randul jucatorului X\n");
            scanf("%d %d", &linie, &coloana);
            if (((linie < 1 || linie>3) || (coloana < 1 || coloana>3)) == true)
                apartine = false;
            printf("%d\n", apartine);
            if (ocupat[linie][coloana] == 0 && apartine == true)
            {
                mat[linie][coloana] = 'X';
                ocupat[linie][coloana] = 1;
            }
            else if (ocupat[linie][coloana] == 1 || apartine == false)
                for (int j = 1;j <= 10000;j++)
                {
                    printf("Jucatorul X a introdus pozitii ocupate sau care nu se afla in tabla de joc,va rugam sa introduceti alte coordonate\n");
                    scanf("%d %d", &linie, &coloana);
                    if (ocupat[linie][coloana] == 0 && (((linie < 1 || linie>3) || (coloana < 1 || coloana>3)) == false))
                    {
                        mat[linie][coloana] = 'X';
                        ocupat[linie][coloana] = 1;
                        break;
                    }
                }
            system("CLS");
            afisare();
            if (verificare() == true && sa_verific == true)
            {
                printf("X a castigat");
                break;
            }
        }
        if (i % 2 == 0)
        {
            bool apartine = true;
            printf("Este randul jucatorului O\n");
            scanf("%d %d", &linie, &coloana);
            if (((linie < 1 || linie>3) || (coloana < 1 || coloana>3)) == true)
                apartine = false;
            printf("%d\n", apartine);
            if (ocupat[linie][coloana] == 0 && apartine == true)
            {
                mat[linie][coloana] = 'O';
                ocupat[linie][coloana] = 1;
            }
            else if (ocupat[linie][coloana] == 1 || apartine == false)
                for (int j = 1;j <= 10000;j++)
                {
                    printf("Jucatorul O a introdus pozitii ocupate sau care nu se afla in tabla de joc,va rugam sa introduceti alte coordonate\n");
                    scanf("%d %d", &linie, &coloana);
                    if (ocupat[linie][coloana] == 0 && (((linie < 1 || linie>3) || (coloana < 1 || coloana>3)) == false))
                    {
                        mat[linie][coloana] = 'O';
                        ocupat[linie][coloana] = 1;
                        break;
                    }
                }
            system("CLS");
            afisare();
            if (verificare() == true && sa_verific == true)
            {
                printf("O a castigat");
                break;
            }
        }
        if (i == 9)
            printf("Remiza");
    }
}
