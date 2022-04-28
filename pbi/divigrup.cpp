#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

ifstream cin("divigrup.in");
ofstream cout("divigrup.out");

int n,nr;

int nrdiv(int n)
{
    int nrd=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                nrd++;
            else nrd+=2;
        }
    }
    return nrd;
}

int main(void)
{
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        arr[i]=nrdiv(nr);
        cout<<arr[i]<<" "<<nr<<endl;
    }
}