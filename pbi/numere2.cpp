#include <fstream>
#include <unordered_set>

using namespace std;

ifstream cin("numere2.in");
ofstream cout("numere2.out");

int n,nr;
unordered_set<int> numere;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        numere.insert(nr);
    }
    for(auto it=numere.begin();it!=numere.end();it++)
        cout<<*it<<" ";
}