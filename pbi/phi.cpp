#include <iostream>
#include <vector>

using namespace std;

int n;

int phi(int n)
{
    int rest=n,divizor=2;
    while(n>1)
    {
        if(n%divizor==0)
        {
            rest=rest / divizor*(divizor-1);
            while(n%divizor==0)
                n/=divizor;
        }
        divizor++;
        if(divizor*divizor>n)
            divizor=n;
    }
    return rest;
}

int main(void)
{
    cin>>n;
    cout<<phi(n)<<endl;
}