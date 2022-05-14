#include <fstream>
#include <vector>

using namespace std;

ifstream cin("eratostene.in");
ofstream cout("eratostene.out");

int c,n,nra=0;
vector<bool> numere_prime(1000000,0);

void ciur(int n)
{
    numere_prime[0]=numere_prime[1]=0;
    for(int i=2;i<=1000;i++)
    {
        if(numere_prime[i]==0)
            for(int j=2;i*j<=1000000;j++)
                numere_prime[i*j]=1;
    }
}

int main(void)
{
    cin>>c;
    ciur(n);
    for(int i=1;i<=c;i++)
    {
        cin>>n;
        if(numere_prime[n]==0)
            nra++;
    }
    cout<<nra<<endl;
}

