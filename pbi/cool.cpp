#include <iostream> 
#include <fstream> 
#include <algorithm>
using namespace std;

int main()
{
    ifstream f("cool.in");
    ofstream g("cool.out");
    int p;
    int n,k,arr[1000],o=0,arr2[1000];
    int maxi=0,mini=10000;
    bool conditie=false;
    f>>p>>n>>k;
    for(int i=1;i<=n;i++)
        f>>arr[i];
    if(p==1)
        for(int j=1;j<=k;j++)
        {
            maxi=std::max(maxi,arr[j]);
            mini=std::min(mini,arr[j]);
            if(maxi-mini==k-1)
            {
                g<<maxi<<endl;
                break;
            }
            else 
            {
                
            }
        }
    return 0;
}