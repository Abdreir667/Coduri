#include <iostream>

using namespace std;

int main()
{
     int n,s;
     cout<<"n=";cin>>n;
     for(int i=2;i<=n;i++)
     {
         s=0;
         for(int j=1;j<=i/2;j++)
            if(i%j==0)
                s=s+j;
        if(s==i)
        cout<<"i="<<i<<endl;
     }
    return 0;
}
