#include <fstream>

using namespace std;

ifstream cin("secventa11.in");
ofstream cout("secventa11.out");

int arr[300001],nr,n,nrp=0,maxi=0;

bool numai1(int n)
{
    bool conditie=false;
    while(n)
    {
        if(n%2==0)
        {
            conditie=true;
            break;
        }
        n/=2;
    }
    return conditie;
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(numai1(nr)==false)
            nrp++;
        else 
        {
            maxi=max(maxi,nrp);
            nrp=0;
        }
    }
    cout<<maxi<<endl;
}