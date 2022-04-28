#include <iostream>

using namespace std;

int main()
{
    int d;
    unsigned long long n;
    cout<<"n=";cin>>n;
    bool ok=1;
if(n<2) ok=0;
for(d=2; d*d<=n && ok==1; d++)
      if(n%d==0) ok=0;
if(ok==1) cout << n << "numar prim";
else cout << n << "nu este nuamr prim";
    return 0;
}
