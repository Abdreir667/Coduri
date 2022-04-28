#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,nrd=0;
    cout<<"a=";cin>>a;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
            nrd++;
    }
    if(nrd==0)
        cout<<"Numarul este prim"<<endl;
    if(nrd==1)
        cout<<"Numarul este patratul unui numar prim, al lui "<<sqrt(a)<<endl;
    if(nrd==2)
        cout<<"Numarul este unul aproape prim"<<endl;
    if(nrd>2)
        cout<<"Numarul este compus"<<endl;
    return 0;
}
