#include <fstream>

using namespace std;

ifstream cin("difsim.in");
ofstream cout("difsim.out");

int arr1[1001],arr2[1001],n,m;

int main(void)
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>arr1[i];
    for(int i=1;i<=m;i++)
        cin>>arr2[i];
    
}