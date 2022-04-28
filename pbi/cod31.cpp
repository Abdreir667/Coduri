#include <fstream>
#include <vector>

using namespace std;

ifstream cin("cod3.in");
ofstream cout("cod3.out");

int n,nr;

int main(void)
{
    cin>>n;
    vector<int> aparitii(n+2,0);
    for(int i=0;i<=n+1;i++) 
    {
        cin>>nr;
        aparitii[nr]++;
    }
    for(auto i=0;i<=n+1;i++)
        if(aparitii[i]%2==1)
            cout<<i;
}
