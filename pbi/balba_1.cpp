/// Regele George al VI-lea al Regatului Unit s-a confruntat cu o problemă neobișnuită pentru o persoană
/// care trebuia să țină discursuri: era bâlbâit. Acesta se bâlbâia chiar și când spunea numere.
/// Interesant este faptul că, atunci când spunea un număr, el repeta doar una dintre cifrele acelui număr,
/// imediat după ce pronunța cifra respectivă.

/// Spre exemplu, numărul 70243 putea fi rostit atunci când se bâlbâia ca 770243 sau ca 700243 sau ca
/// 702243 sau ca 702443 sau ca 702433.

/// Un palilindrom este un număr natural pentru care există o bâlbâială a regelui care îl transformă într-un palindrom.
/// Spre exemplu, 25373552 este un palilindrom, pentru că după o bâlbâială poate deveni 255373552, acesta fiind un număr
/// palindrom.

/// Fiind dat un număr natural nenul X să se determine:

/// 1. Câte numere diferite poate genera X după o bâlbâială și câte numere diferite pot deveni X după o bâlbâială.
/// 2. Cel mai mare număr palilindrom care se poate forma cu cifrele lui X.
///    Nu este obligatoriu să se folosească toate cifrele lui X.

#include <iostream>
#include <fstream>

using namespace std;

int nr[100004];

int main()
{
    ifstream f("balba.in");
    ofstream g("balba.out");
    int c, n, i, cifdifconsec, ciflflconsec, cifant, aparcif[11]= {0}, aparimpar=0, j, cifmaxapar2, k, cifaparimp, cif1, cif2, cifmax;
    bool aparpar=true, apar2=true, gasitprimcif=false, apar1=true;
    f>>c>>n;
    for(i=1; i<=n; i++)
        f>>nr[i];
    f.close();
    nr[n+1]=-1;
    if(c==1)
    {
        cifdifconsec=0;
        i=1;
        while(i<=n)
        {
            if(nr[i]!=nr[i+1])
            {
                cifdifconsec++;
                i++;
            }
            else
                i++;
        }
        g<<cifdifconsec<<"\n";
        ciflflconsec=0;
        cifant=-1;
        for(i=1; i<=n; i++)
        {
            if(nr[i]!=cifant)
                if(nr[i]==nr[i+1])
                    ciflflconsec++;
            cifant=nr[i];
        }
        g<<ciflflconsec;
    }
    else
    {
        for(i=1; i<=n; i++)
            aparcif[nr[i]]++;
        for(i=0; i<=9; i++)
            if(aparcif[i]%2==1)
            {
                aparpar=false;
                aparimpar++;
            }
        if(aparpar==true)
        {
            for(i=0; i<=9; i++)
                if(aparcif[i]>2)
                {
                    apar2=false;
                    break;
                }
            if(apar2==true)
            {
                for(i=9; i>=0; i--)
                    if(aparcif[i]>0)
                        g<<i;
                for(i=0; i<=9; i++)
                    if(aparcif[i]>0)
                        g<<i;
            }
            else
            {
                int maxi=-1;
               for(int i=0;i<=9;i++)
                   if(aparcif[i]>0)
                      maxi=max(maxi,i);
                for(i=9; i>=0; i--)
                    if(aparcif[i]>0)
                        for(j=1;j<=aparcif[i]/2; j++)
                            g<<i;
                g<<maxi;
                aparcif[maxi]--;
                for(i=0;i<=9;i++)
                    if(aparcif[i]>0)
                        for(j=1;j<=aparcif[i]/2; j++)
                            g<<i;
            }

        }
        else if(aparimpar==1)
        {
            bool apare_1=false;
            for(i=0; i<=9; i++)
                if(aparcif[i]==1)
                {
                    cifaparimp=i;
                    break;
                }
            if(aparcif[cifaparimp]==1)
            {
                bool afis=false;
                for(i=9; i>=0; i--)
                    if(i!=cifaparimp && aparcif[i]!=0)
                        for(j=1; j<=aparcif[i]/2; j++)
                            if(i!=0 || afis==true)
                                g<<i,afis=true;
                g<<cifaparimp;
                if(afis==true)
                    for(i=0; i<=9; i++)
                        if(i!=cifaparimp && aparcif[i]!=0)
                            for(j=1; j<=aparcif[i]/2; j++)
                                g<<i;
            }
            else if(aparcif[cifaparimp])
            {
                for(j=9; j>=0; j--)
                    if(j!=cifaparimp && aparcif[j]!=0)
                        for(k=1; k<=aparcif[j]/2; k++)
                            g<<j;
                    else if(aparcif[j]!=0 && j==cifaparimp)
                        for(k=1; k<=aparcif[j]/2+1; k++)
                            g<<j;
                for(j=0; j<=9; j++)
                    if(aparcif[j]!=0)
                    for(k=1; k<=aparcif[j]/2; k++)
                        g<<j;
            }
        }
        else if(aparimpar>=2)
        {
            for(i=0; i<=9; i++)
                if(aparcif[i]!=1 && aparcif[i]%2==1)
                    apar1=false;
            if(apar1==false)
            {
                for(i=9; i>=0; i--)
                    if(aparcif[i]>0 && aparcif[i]%2==1 && aparcif[i]>=3)
                        {
                            cif1=i;
                             break;
                        }
                for(i=9;i>=0;i--)
                    if(aparcif[i]%2==1 && i!=cif1)
                    {
                        cif2=i;
                        break;
                    }
                if(cif1!=0)
                {
                    for(i=9; i>=0; i--)
                        if(aparcif[i]>0)
                            if(i==cif1)
                                for(j=1; j<=aparcif[i]/2+1; j++)
                                    g<<i;
                            else if(i!=cif1)
                                for(j=1; j<=aparcif[i]/2; j++)
                                    g<<i;
                    g<<cif2;
                    for(i=0; i<=9; i++)
                        if(aparcif[i]>0)
                            for(j=1; j<=aparcif[i]/2; j++)
                                g<<i;
                }
                else for(i=1;i<=aparcif[cif2];i++)
                    g<<cif2;
            }
            else
            {
                for(i=0; i<=9; i++)
                    if(aparcif[i]!=0 && aparcif[i]==1)
                        cifmax=i;
                for(i=9; i>=0; i--)
                    if(aparcif[i]>0)
                        if(i!=cifmax && aparcif[i]!=0)
                            for(j=1; j<=aparcif[i]/2; j++)
                                g<<i;
                g<<cifmax;
                for(i=0; i<=9; i++)
                    if(aparcif[i]>0 && i!=cifmax)
                            for(j=1; j<=aparcif[i]/2; j++)
                                g<<i;
            }
        }
    }
    return 0;
}