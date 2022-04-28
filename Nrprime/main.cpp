
#include <iostream>

using namespace std;

int main()
{
    int a,b,p=1,nrd,j;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {

        nrd=0;
        p=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                nrd=nrd+1;
            }
        }
        if(nrd==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
