#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("robot1.in");
ofstream cout("robot1.out");

struct robot{
    int linie;
    int coloana;
    int pinitial;
    int element;
}v[5010];

int n,l,c,lin,col;
int energie=0;
char directie;
int nr,m;

void quicksort(robot v[], int st,int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(v[m], v[st]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (v[i].linie>v[j].linie)
            {
                swap(v[i], v[j]);
                d = 1 - d;
            }
            else if (v[i].linie == v[j].linie && v[i].coloana > v[j].coloana)
            {
                swap(v[i], v[j]);
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        quicksort(v, st, i - 1);
        quicksort(v, i + 1, dr);
    }
}

void quicksort1(robot v[],int st, int dr)
{
    if (st < dr)
    {
        int m = (st + dr) / 2;
        swap(v[m], v[st]);
        int i = st, j = dr, d = 0;
        while (i < j)
        {
            if (v[i].pinitial>v[j].pinitial)
            {
                swap(v[i], v[j]);
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        quicksort(v, st, i - 1);
        quicksort(v, i + 1, dr);
    }
}

int main(void)
{
    cin>>n>>m>>l>>c;
    v[0].linie=l;
    v[0].coloana=c;
    v[0].pinitial=0;
    for(int i=1;i<=m;i++)
    {
        cin>>directie;
        v[i].pinitial=i;
        if(directie=='N')
        {
            v[i].linie=v[i-1].linie-1;
            v[i].coloana=v[i-1].coloana;
        }
        else if(directie=='S')
        {
            v[i].linie=v[i-1].linie+1;
            v[i].coloana=v[i-1].coloana;
        }
        else if(directie=='V')
        {
            v[i].linie=v[i-1].linie;
            v[i].coloana=v[i-1].coloana-1;
        }
        else if(directie=='E')
        {
            v[i].linie=v[i-1].linie;
            v[i].coloana=v[i-1].coloana+1;
        }
    }
    quicksort(v,0,m);
    int temp=0;
    for(int i=1;i<=n && temp<=m+1;i++)
        for(int j=1;j<=n && temp<=m+1;j++)
        {
            cin>>nr;
            if(v[temp].linie==i && v[temp].coloana==j)
            {
                v[temp].element=nr;
                temp++;
            }
        }
    quicksort1(v,0,m);
    int sol,k=0;
    energie=v[0].element;
    if(energie==0)
        sol=0;
    else for(k=1;k<=m;k++)
    {
        energie+=(v[k].element-1);
        sol=k;
        if(energie==0)
            break;
    }
    if(k==m+2)
        sol=m+1;
    cout<<v[sol].linie << " "<<v[sol].coloana;
}