#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k,k1,d,h;
    cout<<"k=";cin>>k;
    for(int i=2;k1<=k-1;i++)
    {
        k1=i*i;
        d=k-k1;
        h=sqrt(d);
        if(h*h==d)
            cout<<i<<h<<endl;

    }
    return 0;
}