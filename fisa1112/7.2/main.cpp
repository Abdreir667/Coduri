#include <iostream>

using namespace std;

int main()
{
    int a,b,nrd,j,i;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(i=a;i<=b;i++)
    {
        nrd=0;
        for(j=1;j<=i;j++)
        {
              if(i%j==0)
              {
                  nrd=nrd+1;
              }
        }
        if(nrd==4)
          {
            cout<<i<<endl;
          }
    }


return 0;
}

