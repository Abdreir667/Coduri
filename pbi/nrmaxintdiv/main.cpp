#include <iostream>

using namespace std;

int main()
{
    int a,nrd,max,nrt;
    cout<<"a=";cin>>a;
    max=1;
    for(int i=1;i<=a;i++)
    {
        nrd=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
                nrd++;
        if(nrd>max)
        {
            max=nrd;
            nrt=i;
        }
        else
            max=max;
    }
    cout<<nrt<<endl;
    return 0;
}
