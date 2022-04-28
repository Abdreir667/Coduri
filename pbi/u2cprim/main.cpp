#include <iostream>

using namespace std;

int main()
{
    int n,k=1,a,u2c,nrp=0;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    while(k!=n)
    {
        u2c=a%100;
        int nrd=0;
        for(int j=2;j<=u2c/2;j++)
            if(u2c%j==0)
                nrd++;
        if(nrd==0)
            nrp++;
       cout<<"a=";cin>>a;
       k++;
    }
    cout<<nrp<<endl;

    return 0;
}
