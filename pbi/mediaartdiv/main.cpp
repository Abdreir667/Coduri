#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float avg,s=0,nre=0;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
            nre++;
        }
    }
    cout<<s<<" "<<nre<<endl;
    avg=s/nre;
    cout<<avg<<endl;
    return 0;
}
