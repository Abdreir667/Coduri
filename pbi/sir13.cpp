#include <iostream>
#include <fstream>
using namespace std;
///Se dă un șir de cel mult un milion de numere naturale din intervalul [0,1000000000], separate prin câte un spațiu.
///Șirul are cel puțin doi termeni pari și cel puțin doi termeni impari.
///Se cere să se afișeze mesajul DA dacă șirul aflat în fișier are un subșir ordonat crescător,
///format din toți termenii pari ai săi, și un subșir ordonat descrescător, format din toți termenii impari ai săi.
///Dacă nu există două astfel de subșiruri, programul afișează pe ecran mesajul NU.
///Fișierul de intrare sir13.in conține elementele șirului, separate printr-un spațiu.
///Fișierul de ieșire sir13.out va conține pe prima linie mesajul DA sau NU, corespunzător cerinței.
int main()
{
    ifstream f("sir13.in");
    int pare[1000000], impare[1000000], m=0, n=0, nr, i;
    bool sirpar=true, sirimpar=true;
    while (f>>nr)
    {
        if(nr%2==0)
            pare[++m]=nr;
        else
            impare[++n]=nr;
    }
    for(i=1; i<m; i++)
        if (pare[i]>pare[i+1])
            sirpar=false;
        else
        {
            sirpar=true;
            break;
        }
    for (i=1; i<n; i++)
        if(impare[i]<impare[i+1])
            sirimpar=false;
        else 
        {
            sirimpar=
        }
    if(sirpar==true&&sirimpar==true)
        cout<<"DA";
    else
        cout<<"NU";
    f.close();
    return 0;
}