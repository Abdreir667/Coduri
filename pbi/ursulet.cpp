#include <fstream>

using namespace std;

ifstream cin("ursulet.in");
ofstream cout("ursulet.out");
;
int arr[100001],n,s=0,c1,c2,temp1,smax=-1000000,lung=0,lungmax;

int main(void)
{
    cin>>n>>lungmax;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        int k=i;
        if(s<smax || s<0)
        {
            s=0;
            lung=0;
            temp1=i;
        }
        s+=arr[i];
        lung++;
        if(s>smax && lung>=lungmax)
        {
            smax=s;
            c1=temp1;
            c2=i;
        }
    }
    cout<<smax<<endl;
}