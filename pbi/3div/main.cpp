#include <iostream>

using namespace std;

int main()
{
    int a,b,nrd;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        nrd=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
                nrd++;
        if(nrd==1)
            cout<<i<<endl;
    }
    return 0;
}
