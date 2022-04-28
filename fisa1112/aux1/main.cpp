#include <iostream>

using namespace std;

int main()
{
    int n,nre=0,nrc=0,p,nri=0;
    cout<<"n=";cin>>n;
    int max=n;
    while(nre==nrc)
    {
        cout<<"n=";cin>>n;
        if(n>max)
        {
            max=n;
            nrc++;
        }
        else if(n<max)
        {
            max=max;
        }
        nre++;
    }
    return 0;
}
