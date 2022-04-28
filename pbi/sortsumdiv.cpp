#include <fstream>

using namespace std;

ifstream cin("nrsecvente.in");
ofstream cout("nrsecvente.out");

bool arr1[100001];

int main(void)
{
    int n,t,k,nr;
    cin>>n>>t>>k;
    for(int i=1;i<=n;i++)   
    {
        cin>>nr;
        if(nr<=t)
            arr1[i]=0;
        else arr1[i]=1;
        cout<<arr1[i]<<" ";
    }
    for(int i=1;i<=n;i++)
    {
        
    }
}
