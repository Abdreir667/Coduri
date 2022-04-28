#include <iostream>

using namespace std;

int main()
{
    int a,nrc=0,k=0,c1;
    cout<<"a=";cin>>a;
    while(a!=0)
    {
        c1=a%10;
        if(c1%10==1)
        {
            nrc=nrc+1;
            a=a/10;
        }
        if(c1%10!=1)
        {
            a=a/10;
        }
    }
    cout<<nrc<<endl;
    return 0;
}
