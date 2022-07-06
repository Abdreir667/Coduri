#include <fstream>
#include <ios>

using namespace std;

ifstream cin("secv011.in");
ofstream cout("secv011.out");

int n;
int sume[1000001]={0};
long long secv=0;
int val;

int main(void)
{
    ios_base::sync_with_stdio(false);
    sume[0]=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>val;
        sume[i]=sume[i-1]+val;
    }
    if(sume[n]==2*n/3)
        secv++;
    for(int i=3;i<=n-1;i+=3)
    {
        int sum=2*i/3;
        for(int j=1;j<=n-i+1;j++)
        {
            if(sume[j+i-1]-sume[j-1]==sum)
                secv++;
        }
    }
    cout<<secv<<" ";
}