#include <iostream>

using namespace std;

int main()
{
    int a,b,nrd,max=1,nra=0,min=10000;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        nrd=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
                nrd++;
        if(nrd>max)
            max=nrd;
        else
            max=max;
        if(nrd==max)
        {
            nra++;
            if(i<min)
                min=i;
            else min=min;
        }

    }
    cout<<min<<endl;
    cout<<max<<endl;
    cout<<nra<<endl;
    return 0;
}
