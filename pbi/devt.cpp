#include <fstream>
#include <vector>

using namespace std;

ifstream cin("devt.in");
ofstream cout("devt.out");

vector<bool> sir_devt(1000000);
vector<int> numere_prime;
int n,nr;
int lungime=0;

void generare_sir(int n)
{
    int nrd=0;
    sir_devt[1]=1;
    numere_prime.push_back(1);
    for(int i=1;i<=100000 && nrd!=n;i++)
    {
        if(sir_devt[i]==0)
            for(int j=2;j<=100000/i;j++)
                sir_devt[i*j]=1;
        if(sir_devt[i]==1)
        {
            nrd++;
            numere_prime.push_back(i);
        }
        lungime++;
    }
}

int binarysearch(vector<int> &arr,int st,int dr,int nr)
{
    int p=0;
    dr=arr.size();
    while(st<=dr)
    {
        int m=(st+dr)/2;
        if(arr[m]<=nr)
        {
            p=m;
            st=m+1;
        }
        else dr=m-1;
    }
    return p;
}

int main(void)
{
    cin>>n>>nr;
    generare_sir(n);
    for(auto x:numere_prime)
        cout<<x<<" ";
    for(int i=1;i<=nr;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<binarysearch(numere_prime,0,numere_prime.size(),y)-binarysearch(numere_prime,0,numere_prime.size(),x-1)<<endl;
    }
}
