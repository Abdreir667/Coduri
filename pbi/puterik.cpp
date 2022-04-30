#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("puterik.in");
ofstream cout("puterik.out");

int n,nr,k;

bool este_putere(int n,int k)
{
    bool ok=false;
    if(n==1)
        ok=true;
    else if(n%k!=0)
        ok=false;
    else if(n%k==0)
    {
        while(n!=0)
        {
            if(n%k==0)
                n/=k;
            else 
            {
                ok=false;
                break;
            }
        }
        if(n==0 || n==1)
            ok=true;
    }
    return ok;
}

int main(void)
{
    cin>>n>>k;
    vector<int> puteri;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(este_putere(nr,k)==true)
            puteri.push_back(nr);
    }
    sort(puteri.begin(),puteri.end());
    for(auto x:puteri)
        cout<<x<<" ";
}