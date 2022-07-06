#include <fstream>
#include <cstring>
#include <climits>

using namespace std;

ifstream cin("parsare.in");
ofstream cout("parsare.out");

int n,maxi=INT_MIN;

int main(void)
{
    char s[8];
    while(cin.get(s,8,' '))
    {
        n=atoi(s);
        maxi=max(maxi,n);
        cin.get();
    }
    cout<<maxi<<" ";
}