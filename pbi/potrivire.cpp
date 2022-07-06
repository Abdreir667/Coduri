#include <stdio.h>

using namespace std;

FILE *in= fopen("potrivire.in", "r");
FILE *out= fopen("potrivire.out", "w");

bool numere_formate[100001]={0};
int n,numere[100001],m,nr;
long long suma=0;

void construiere()
{
    for(int i=1;i<=n;i++)
        numere_formate[numere[i]]=1;
    for(int i=1;i<=n;i++)
    {
        int j=i+1;
        int temp=numere[i];
        while(j<=n && j-i+1<=5)
        {
            temp=temp*10+numere[j];
            numere_formate[temp]=1;
            j++;
        }
    }
}

int main(void)
{
    fscanf(in, "%d",&n);
    for(int i=1;i<=n;i++)
        fscanf(in,"%d",&numere[i]);
    construiere();
    fscanf(in, "%d",&m);
    for(int i=1;i<=m;i++)
    {
        fscanf(in, "%d",&nr);
        if(numere_formate[nr]==1)
        {
            suma+=nr;
            numere_formate[nr]=0;
        }
    }
    fprintf(out,"%d",suma);
}