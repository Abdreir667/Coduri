#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
    int n,nr,nrs=0;
    cin>>n;
    vector<int> suma;
    suma.push_back(0);
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        suma.push_back(suma[i-1]+nr);
        cout<<suma[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++)
        if(suma[i]==suma[i+1]-1);
            nrs++;
    cout<<nrs<<endl;
    return 0;
}
