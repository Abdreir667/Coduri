#include <stdio.h>

using namespace std;

int linii,mat[101][101]={0};
//exemple pentru un patrat 5X5
int main() {
    scanf("%d",&linii);
    int lin_aux = linii / 2 + 1, col_aux = linii;
    for (int i = 1; i <= linii * linii; i++) 
    {
        if (lin_aux == 0 && col_aux == linii + 1) 
        {
            lin_aux = 1;
            col_aux = linii - 1;
        }
        else
        {
            if (col_aux == linii + 1)//daca col_aux iese din matrice aceasta revine la inceput,ex:4 5 -> 3 1
                col_aux = 1;
            if (lin_aux <= 0) //analog cu liniile,daca ies din matrice acestea revin la sfarsit ,ex: 1 4 -> 5 5
                lin_aux = linii;
        }
        if(mat[lin_aux][col_aux]!=0) //daca se intalneste un spatiu "plin" in se trece pe linia urmatoare ex: 2 2 ar trebui sa inainteze pe 1 3,insa este ocupat de 1,deci se va scrie pe 3 2 
        {
            col_aux -= 2; // se micsoreaza cu 2 si se mareste pe 1 pentru ca se raptorteaza fata de pozitia curenta
            lin_aux++;
        }
        mat[lin_aux][col_aux] = i;
        lin_aux--;//miscarea pe diagonala din videoclip
        col_aux++;
    }
    for(int i=1;i<=linii;i++,printf("\n"))
        for(int j=1;j<=linii; j++)
            printf("%d ",mat[i][j]);
}