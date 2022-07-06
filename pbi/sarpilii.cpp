#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int mat[20][20];

void afisare(void)
{
    for(int i=1;i<=20;i++,cout<<"\n")
        for(int j=1;j<=20;j++)
            cout<<mat[i][j]<<" ";
}

int get_key(void)
{
    int c;
    c = 0;
    while(1)
    {
        switch((c=getch())) {
            case KEY_UP:
                return 1;//sus
                break;
            case KEY_DOWN:
                return 2;//jos
                break;
            case KEY_LEFT:
                return 3;//stanga
                break;
            case KEY_RIGHT:
                return 4;//dreapta
                break;
        }
    }
}

int main()
{
    cout<<get_key();
    return 0;
}