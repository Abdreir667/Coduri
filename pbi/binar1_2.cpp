/// Scrieți un program care, pentru un șir dat de n numere naturale, rezolvă următoarele cerințe:
/// 1) Determină cel mai mare dintre cele n numere date ce are număr maxim de valori de 1 în reprezentarea binară.
/// 2) Determină cea mai lungă secvență de numere care au număr egal de valori de 1 în reprezentarea binară.
/// Dacă sunt mai multe astfel de secvențe de lungime maximă, se va alege cea mai din stânga.
/// O secvență este un subșir de numere care apar pe poziții consecutive în șirul inițial.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("binar.in");
    ofstream g("binar.out");
    int n, c, nr, maxi=-1, apar1max=-1, i, nr1, apar1, secv, secvmax, term1, term1aux, apar1crt, apar1ant;
    f>>c>>n;
    if(c==1)
    {
        for(i=1; i<=n; i++)
        {
            f>>nr;
            nr1=nr;
            apar1=0;
            while(nr1>0)
            {
                if(nr1%2==1)
                    apar1++;
                nr1=nr1/2;
            }
            if(apar1>apar1max)
            {
                apar1max=apar1;
                maxi=nr;
            }
            else if(apar1==apar1max)
                if(nr>maxi)
                    maxi=nr;

        }
        g<<maxi;
    }
    else
    {
        secv=1;
        term1aux=1;
        f>>nr;
        nr1=nr;
        apar1crt=0;
        while(nr1>0)
        {
            if(nr1%2==1)
                apar1crt++;
            nr1=nr1/2;
        }
        apar1ant=apar1crt;
        for(i=2; i<=n; i++)
        {
      f>>nr;
      nr1=nr;
      apar1crt=0;
      while(nr1>0)
      {
          if(nr1%2==1)
              apar1crt++;
          nr1=nr1/2;
      }
      if(apar1crt==apar1ant)
          secv++;
      else
      {
          if(secv>secvmax)
          {
          secvmax=secv;
          term1=term1aux;
          }
          secv=1;
          term1aux=i;
      }
      apar1ant=apar1crt;
  }
  if(secvmax<secv)
  {
      secvmax=secv;
      term1=n-secv+1;
  }
  g<<secvmax<<" "<<term1;

turn 0;
