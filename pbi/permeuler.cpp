#include <fstream>
#include <vector>

using namespace std;

ifstream cin("permeuler.in");
ofstream cout("permeuler.out");

int nr,n,k=0,afisare;
float val,mini=2147483647;

int phi(int n)
{
    int rank=n;
    if(n==1)
        return 0;
    if(n%2==0)
    {
        rank-=rank/2;
        while(n%2==0)
            n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
        {
            rank-=rank/i;
            while(n%i==0)
                n/=i;
        }
    if(n>1)
        rank-=rank/n;
    return rank;
}

bool permutari(int n,int temp)
{
    vector<short> n_1(10,0);
    vector<short> verificare(10,0);
    while(n)
    {
        n_1[n%10]++;
        n/=10;
    }
    while(temp)
    {
        verificare[temp%10]++;
        temp/=10;
    }
    for(int i=0;i<=9;i++)
        if(n_1[i]!=verificare[i])
            return false;
    return true;
}

int main(void)
{
    while(cin>>n)
    {
        int val=phi(n);
        if(permutari(n,val)==true)
        {
            float raport=1.0*n/val;
            if(raport<mini)
            {
                mini=raport;
                afisare=n;
            }
        }
    }
    cout<<afisare<<" ";
}


