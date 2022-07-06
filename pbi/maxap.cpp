#include <stdio.h>
#include <algorithm>

using namespace std;

int linii,coloane,nr,maxi=0;

struct valoare{
    int numar;
    short apar=0;
}p[1000001];

int ord(valoare x,valoare y)
{
    if(x.apar==y.apar)
        return x.numar>y.numar;
    else return x.apar>y.apar;
}

int main(void)
{
    scanf("%d %d",&linii,&coloane);
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
            scanf("%d",&nr);
            p[nr].apar++;
            p[nr].numar=nr;
            maxi=max(maxi,nr);
        }
    sort(p+1,p+1+maxi,ord);
    printf("%d",p[1].numar);
}