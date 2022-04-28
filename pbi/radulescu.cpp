#include <fstream>

using namespace std;


int main()
{
    int n,d,k,pozdama[103][3],malbe[1003],i,l,c,o,aux;
    char tabla[1003][1003];
    ifstream f("betasah.in");
    ofstream g("betasah.out");
    f>>n>>d>>k;
    for(int i=1;i<=d;i++)
    {
        f>>l>>c;
        tabla[l][c]='d';
        pozdama[i][1]=l;
        pozdama[i][2]=c;
    }
    for(int i=1;i<=n;i++)
        malbe[i]=i;
    for(int i=1;i<=k;i++)
    {
        f>>l>>c;
        tabla[l][c]='g';
        malbe[l]--;
    }
    int m=malbe[1];
    for(i=2;i<=n;i++)
       m=max(malbe[i],m);
    for(int i=0;i<=n+1;i++)
       tabla[i][0]=tabla[i][i+1]=tabla[i][i+2]='g';
    for(int j=0;j<=n+2;j++)
       tabla[n+1][j]='g';
    for(int i=1;i<=d;i++)
    {
        l=pozdama[i][1]; c=pozdama[i][2];
        o=c-1;
            while(tabla[l][o]!='g')
            {
               if(tabla[l][o]==0)
               tabla[l][o]='o';
               o--;
            }
            o=c+1;
            while(tabla[l][o]!='g')
            {
                if(tabla[l][o]==0)
                tabla[l][o]='o';
                o++;
            }
          aux=l-1;
            while(tabla[aux][c]!='g')
            {
                if(tabla[aux][c]==0)
                tabla[aux][c]='o';
                aux--;
            }
            aux=l+1;
            while(tabla[aux][c]!='g')
            {
                if(tabla[aux][c]==0)
                tabla[aux][c]='o';
                aux++;
            }
        aux=l-1; 
        o=c-1;
            while (tabla[aux][o]!='g')
            { 
            if(tabla[aux][o]!='d') 
            tabla[aux][o]='o';
              aux--;
              o--;
            }
            aux=l+1; 
            o=c+1;
            while (tabla[aux][o]!='g')
            {
                if(tabla[aux][o]!='d') 
                tabla[aux][o]='o';
                aux++; 
                o++;
            }
        aux=l-1; 
        o=c+1;
            while (tabla[aux][o]!='g')
            { 
            if(tabla[aux][o]!='d') 
            tabla[aux][o]='o';
              aux--; 
              o++;
            }
            aux=l+1; 
            o=c-1;
            while (tabla[aux][o]!='g')
            { 
                if(tabla[aux][o]!='d')
                 tabla[aux][o]='o';
                aux++; 
                o--;
            }
    }
    int p=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            if(tabla[i][j]=='o')
                p++;
    g<<m<<endl<<p<<endl;
    return 0;

}