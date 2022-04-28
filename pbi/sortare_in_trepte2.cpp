#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream cin("sint.in");
ofstream cout("sint.out");

int n,nr,temp1=0,temp2=0,nr0=0;

int main(void)
{
    vector<int> negative;
    vector<int> positive;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(nr<0)
            negative.push_back(nr);
        else if(nr>0)
            positive.push_back(nr);
        if(nr==0)
            nr0++;
    }
    sort(negative.begin(),negative.end(),greater<int>());
    sort(positive.begin(),positive.end(),greater<int>());
    for(auto i:negative)
        cout<<i<<" ";
    for(int i=1;i<=nr0;i++)
        cout<<0<<" ";
    for(auto i : positive)
        cout<<i<<" ";
}