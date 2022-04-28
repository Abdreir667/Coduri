#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("cb3.in");
ofstream cout("cb3.out");

int a[10001] , n;
long long int sp[10001];

int cb(int x)
{
    int st = 1 , dr = n;
    while(st <= dr)
    {
        int mij = (st + dr) / 2;
        if(sp[mij] > x)
            dr = mij - 1;
        if(sp[mij] < x)
            st = mij + 1;
        if(sp[mij] == x)
            return mij;
    }
    return dr;
}

int main()
{
    int q;
    cin >> n >> q;
    for(int i = 1 ; i <= n ; ++i)
        cin >> a[i];
    sort(a+1 , a+n+1);
    for(int i = 1 ; i <= n ; ++i)
        sp[i]=sp[i-1]+a[i];
    for(int i=0 ; i <= n ; ++i)
        cout<<sp[i]<<" ";
    int x;
    cout<<endl;
    for(int i = 1 ; i <= q ; ++i)
    {
        cin >> x;
        cout << cb(x) << '\n';
    }
    return 0;
}