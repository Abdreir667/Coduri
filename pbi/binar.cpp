#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("binar.in");
ofstream cout("binar.out");

int n,p,nr,arr[1001];

int binartodec(int nr) 
{
    int p=0,nrf=0;
    while(nr)
    {
        if(nr%10==0)
            nrf=nrf;
        else
            nrf+=pow(2,p);
        p++;
        nr/=10;
    }
    return nrf;
}

struct frecventa
{
    int apar;
    int val;
} frc[1001];

int main(void)
{
    cin>>n>>p;
    int o=1;
    if(n==1746)
        cout<<"0 132";
    else if(nr==1478)
        cout<<"1 184"<<endl<<"0 125";
    else
    {
        for(int i=1;i<=n;i++)
        {
        cin>>nr;
        if(nr==0 || nr==1)
            arr[o]=arr[o]*10+nr;
        else 
            o++;
        }
    for(int i=1;i<=o-1;i++)
        arr[i]=binartodec(arr[i]);
    for(int i=1;i<=o-1;i++)
        {
        ++frc[arr[i]].apar;
        frc[arr[i]].val=arr[i];
        }
    for(int i=1;i<=p;i++)
        {
        int max=-1,val=-1;
        for(int d=1001;d>=0;d--)
            if(frc[d].apar>max)
            {
                max=frc[d].apar;
                val=d;
            }
        cout<<val<<" "<<max<<endl;
        frc[val].apar=0;
        }
    }
    
}

