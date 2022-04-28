/// Dându-se mai multe șiruri crescătoare de numere naturale, sfârșitul fiecarui astfel de șir fiind marcat de numărul 0,
/// se cere să se afișeze în ordine strict crescătoare, numerele comune tuturor șirurilor.
/// Fișierul de intrare intersectie.in conține numere naturale separate printr-un spațiu, care formează șiruri
/// crescătoare, fiecare astfel de șir terminându-se cu numărul 0.
/// Fișierul de ieșire intersectie.out va conține în ordine strict crescătoare, numerele comune tuturor șirurilor
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("intersectie.in");
    ofstream cout("intersectie.out");
    int nr, s1[1000], s2[1000], n1=0, n2=0, i, sir1, sir2, c=0, comune[1000], nrsir=0, a, aux[1000], s[1000], n=0, sir, com;
    while(cin>>nr)
        if(nr==0)
            nrsir++;
    cin.close();
    cin.open("intersectie.in");
    while (cin>>nr)
    {
        if(nr==0)
            break;
        s1[++n1]=nr;
    }
    while (cin>>nr)
    {
        if(nr==0)
            break;
        s2[++n2]=nr;
    }
    sir1=1;
    sir2=1;
    while(sir1<=n1 && sir2<=n2)
        if(s1[sir1]==s2[sir2])
        {
            comune[++c]=s1[sir1];
            sir1++;
            sir2++;
        }
        else
            if(s1[sir1]<s2[sir2])
                sir1++;
            else
                sir2++;
    a=c;
    c=0;
    for(i=1; i<=a; i++)
        aux[i]=comune[i];
    for(i=3; i<=nrsir; i++)
    {
        while(cin>>nr)
        {
            if(nr==0)
                break;
            s[++n]=nr;
        }
        sir=1;
        com=1;
        while(sir<=n && com<=a)
            if(s[sir]==aux[com])
            {
                comune[++c]=s[sir];
                sir++;
                com++;
            }
            else
                if(s[sir]<aux[com])
                    sir++;
                else
                    com++;
        a=c;
        c=0;
        for(int j=1; j<=a; j++)
            aux[j]=comune[j];
    }
    if(a>0)
        for(i=1; i<=a; i++)
            cout<<comune[i]<<" ";
    else
        cout<<"nu exista";

    return 0;
}