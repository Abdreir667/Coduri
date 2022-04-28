#include <iostream>

using namespace std;

int main()
{
    int n,d=0;
    cout<<"n=";cin>>n;
    for(int j=2;j<=n/2;j++)
    {
        if(n%j==0)
            d++;
    }
    if(d==0)
        cout<<"Numarul este prim"<<endl;
    else
        cout<<"Numaul nu este prim"<<endl;
    return 0;
}
