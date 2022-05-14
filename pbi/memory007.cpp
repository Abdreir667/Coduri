#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("memory007.in");
ofstream cout("memory007.out");

vector<int> numere;
int n,m,cap1,cap2,nr,s=0,poz;


int main(void)
{
    cin>>n>>m>>cap1>>cap2;
    for(int i=0;i<n;i++)
    {
        cin>>nr;
        numere.push_back(nr);
    }
    sort(numere.begin(), numere.end());
    for(int i=0;i<m;i++)
    {
        cin>>poz;
        s+=numere[poz-1];
    }
    cout<<s<<endl;
}