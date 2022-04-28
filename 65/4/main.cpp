#include <iostream>

using namespace std;

int main()
{
    int a,nrd1,nrd2,d,k;
    cout<<"a=";cin>>a;
    for(int i=2;i<=a-1;i++)
    {
        nrd1=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
                nrd1++;
        if(nrd1==0)
        {
           d=a-i;
           nrd2=0;
           for(int k=2;k<=d/2;k++)
                if(d%k==0)
                    nrd2++;
        }
        if(nrd1==0 && nrd2==0)
            cout<<i<<d<<endl;


    }
    return 0;
}
