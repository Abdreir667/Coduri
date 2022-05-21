#include <fstream>

using namespace std;

ifstream cin("memory004.in");
ofstream cout("memory004.out");

short linii, coloane, nr, j;
long long lmax = 0;

struct linii
{
    short lung_inceput = 0; // lungimea pana cand se intalneste un numar prim pe coloana pentur prima data
    bool terminat = false;  // conditia pentru aflarea lung_inceput
    short lungime = 0;      // lungimea maxima a unei secvente(optional)
    short lung_final = 0;   // lungimea curenta a unei secvente de pe coloana
} p[1002];

bool is_prime(short n) // verificarea daca numarul dat ca parametru este prim sau nu
{
    bool ok;
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (short i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main(void)
{
    cin >> linii >> coloane;
    for (int i = 0; i < linii; i++)
    {
        for (j = 0; j < coloane; j++)
        {
            cin >> nr;
            if (is_prime(nr) == true)
            {
                if (p[j % coloane].terminat == 0) // atata timp cat nu se intalneste nici un numar prim se mareste
                    p[j % coloane].lung_inceput++;
                p[j % coloane].lungime++;                           // se mareste oricum
                p[j % coloane].lung_final = p[j % coloane].lungime;
            }
            else if (is_prime(nr) == false)
            {
                p[j % coloane].terminat = 1; // daca se intalneste un numar prim nu se va mai aduna la lung_inceput
                if (j == 0)
                    p[j % coloane].lung_inceput = 0;
                if (p[j % coloane].lungime > lmax) // verificarea daca o secventa data este maxima
                    lmax = p[j % coloane].lungime;
                p[j % coloane].lung_final = 0; // odata cu intalnirea unui numar prim lungimea finala si curenta devin 0
                p[j % coloane].lungime = 0;
            }
        }
    }
    for (int i = 0; i < coloane; i++)
    {
        long long lung_temporara = 0;
        // cout<<p[i].lung_inceput<<" "<<p[i].lungime<<" "<<p[i].lung_final<<endl;
        if (p[i].lung_final != 0 && p[i + 1].lung_inceput != 0) // daca lungimea finala a unei coloane si cea de la inceput a urmatoarei coloane sunt diferite de 1 ele se aduna
        {
            lung_temporara = p[i].lung_final + p[i + 1].lung_inceput;    // adunarea precizata mai sus
            if (p[i + 2].lung_inceput != 0 && p[i + 1].lungime == linii) // daca o coloana contine numari numere prime atunci se trece la urmatoarea si daca este cazul se aduna lungimea de la inceput
            {
                int k = i + 2;
                while (p[k].lung_inceput != 0 && p[k - 1].lungime == linii) // se aduna numarul de coloane care contin numai elemnte prime pana cand se gaseste una care nu este compusa in totalitate din elementele respective,se adauga si lungimea de la inceput a acesteia
                {
                    lung_temporara += p[k].lung_inceput;
                    k++;
                }
                // i=k;
            }
        }
        if (lung_temporara > lmax)
            lmax = lung_temporara;
    }
    cout << lmax << endl;
}