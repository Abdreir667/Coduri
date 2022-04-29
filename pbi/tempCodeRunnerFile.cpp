#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cmmnr(int n) 
{
    vector<int> cifre_numar;
    while(n)
    {
        cifre_numar.push_back(n%10);
        n /= 10;
    }
    sort(cifre_numar.begin(), cifre_numar.end());
    for(auto x : cifre_numar)
        cout<<x<<" ";
}

int main(void)
{
    int n;
    cin>>n;
    cmmnr(n);
}