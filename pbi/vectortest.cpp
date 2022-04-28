#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n,nr;
    cin>>n;
    vector<int> A;
    for(int i=1;i<=n;++i)
    {
        cin>>nr;
        A.push_back(nr);
    }
    sort(A.begin(),A.end());
    for(auto i=A.begin();i<A.end();i++)
        cout<<*i<<" ";
}