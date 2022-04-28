#include <iostream>
#include <vector>

using namespace std;

int n,temp=0;
long long nr;

int main(void)
{
    cin>>n;
    vector<long long > numere;
    for(int i=0; i<n; i++)
    {
        cin>>nr;
        numere.push_back(nr);
    }
    for(unsigned int i=0; i<numere.size()-1; i++)
        if(numere[i]%2==numere[i+1]%2)
        {
            numere.insert(numere.begin()+i,(numere[i]+numere[i+1])/2);
        }
    for(auto x:numere)
        cout<<x<<" ";
        
    
}