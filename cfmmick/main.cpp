#include <iostream>

using namespace std;

int main()
{
    int n,k,ncr=0,nct=0,c1;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    while(n!=0)
    {
        c1=n%10;
        if(c1<=k)
        {
            ncr=ncr+1;
        }
        nct=nct+1;
        n=n/10;
    }
    if(ncr==nct)
        cout<<"Este respectata conditia";
    else
        cout<<"Nu este respecata conditia";
    return 0;
}
