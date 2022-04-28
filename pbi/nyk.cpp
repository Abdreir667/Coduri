#include <fstream>

using namespace std;

ifstream cin("nyk.in");
ofstream cout("nyk.out");

int arr[1001],n,m,nr1,maxi,poz,pozaux;
int gcd(int n,int m)
{
    while(m!=0)
    {
        int r=n%m;
        n=m;
        m=r;
    }
    return n;
}

bool isprime(int nr)
{
    bool ok=1;
    if(n<2) ok=0;
    for(int d=2; d*d<=n && ok==1; d++)
      if(n%d==0) ok=0;
    if(ok==1)
    return ok;
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        int temp=0;
        for(int j=1;j<=m;j++)
        {
            cin>>arr[j];
            temp=gcd(arr[j],temp); 
        }
        maxi=max(temp,maxi);
        if(temp==maxi)
        {
            poz=i;
            for(int j=1;j<=m;j++)
            {
                if(isprime(arr[j])==true) 
                    pozaux=j;
            }
        }
    }
    cout<<poz<<" "<<pozaux<<endl;
    cout<<maxi<<endl;
}
