#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int n,nr;

int main(void)
{
    cin>>n;
    vector<int> numere;
    for(int i=0;i<n;i++)
    {
        cin>>nr;
        if(floor(sqrt(nr))==sqrt(nr))
        {
            numere.push_back(sqrt(nr));
            numere.push_back(nr);
        }
        else numere.push_back(nr);
    }
    for(auto x:numere)
        cout<<x<<" ";
}