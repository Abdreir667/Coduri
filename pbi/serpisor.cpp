#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <vector>
#include <random>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define n 10

using namespace std;

int mat[11][11] = { 0 };
short lungime = 4;
bool terminat = false;
int lin_cap = 1, col_cap = 3;
int lin_fin, col_fin;

vector<pair<int, int>> sarpe;

void conturare(void)
{
    for (int i = 0;i <= n;i++)
        mat[i][0] = mat[0][i] = mat[n][i] = mat[i][n] = 1;
}

void afisare(void)
{
    for (int i = 0;i <= 10;i++, printf("\n"))
        for (int j = 0;j <= 10;j++)
        {
            if (mat[i][j] == 0)
                printf("  ");
            else  printf("%d ", mat[i][j]);
        }

}

int generare_linie(void)
{
    int x;
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<std::mt19937::result_type> dist6(1, 9); // distribution in range [1, 6]
    return dist6(rng);
}

void miscare()
{
    for (int i = 0;i < lungime - 1;i++)
        sarpe[i].first = sarpe[i + 1].first, sarpe[i].second = sarpe[i + 1].second;
}

void afisare_vector()
{
    for (auto x : sarpe)
        printf("%d %d\n", x.first, x.second);
}

void reverse_vector()
{
    for (int i = 1, j = 0;i <= lungime / 2;i++, j++)
    {
        swap(sarpe[i].first, sarpe[lungime - 1 - j].first);
        swap(sarpe[i].second, sarpe[lungime - 1 - j].second);
    }
}

int get_key(void)
{
    int c;
    c = 0;
    while (1)
    {
        switch ((c = getch())) {
        case KEY_UP:
            sarpe.back().first--;
            return 0;
        case KEY_DOWN:
            sarpe.back().first++;
            return 0;
        case KEY_LEFT:
            sarpe.back().second--;
            return 0;
        case KEY_RIGHT:
            sarpe.back().second++;
            return 0;
        }
    }
}

int main(void)
{
    conturare();
    for (int i = 1;i <= lungime;i++)
        sarpe.push_back(make_pair(1, i));
    mat[1][1] = 0;
    miscare();
    mat[generare_linie()][generare_linie()] = 1;
    while (terminat == false)
    {
        int lin_ant = sarpe[0].first, col_ant = sarpe[0].second;
        get_key();
        if (mat[sarpe[lungime - 1].first][sarpe[lungime - 1].second] == 1)
        {
            lungime++;
            printf("%d %d\n", lin_ant, col_ant);
            sarpe.push_back(make_pair(lin_ant, col_ant));
            mat[sarpe.back().first][sarpe.back().second] = 9;
            mat[generare_linie()][generare_linie()] = 1;
            reverse_vector();
        }
        for (int i = 0;i < lungime;i++)
            mat[sarpe[i].first][sarpe[i].second] = 9;
        mat[lin_ant][col_ant] = 0;
        miscare();
        system("CLS");
        afisare();
    }

}