#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k,k1,d,h;
    cout<<"k=";cin>>k;
    for(int i=1;k1<=k-1;i++)
    {
        k1=i*i;
        d=k-k1;
        for(int j=1;j<=d/2;j++)
            if(j*j==d)
                cout<<j<<i<<endl;

    }
    return 0;
}