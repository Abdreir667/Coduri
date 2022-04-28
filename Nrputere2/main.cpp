#include <iostream>

using namespace std;

int main()
{
    int a,nrp=0;
    cout<<"a=";cin>>a;
    while(a!=1)
    {
        if(a%2==0)
        {
            nrp++;
            a=a/2;
        }
    }
    cout<<nrp<<endl;
    return 0;
}
