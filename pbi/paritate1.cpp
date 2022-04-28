#include <iostream>
#include <math.h>

using namespace std;

int main(void) 
{
    int n,nr,nrp=0,nri=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(nr%2==0)
            nrp++;
        else nri++;
    }
    cout<<abs(nrp-nri)<<endl;
}