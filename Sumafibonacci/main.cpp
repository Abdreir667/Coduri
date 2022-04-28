#include <iostream>

using namespace std;

int main()
{
    int a,j,t1,t2,t3,x1,x2,x3;
    cout<<"a=";cin>>a;
    for(int i=1;i<=a-1;i++)
    {
      j=a-1;
      t1=1;
      t2=1;
      while(i>t3)
      {
          t3=t1+t2;
          t1=t2;
          t2=t3;
      }
      x1=1;
      x2=2;
      while(j>x3)
      {
          x3=x1+x2;
          x1=x2;
          x2=x3;
      }
      if((i==t3) && (j==x3))
        cout<<i<<j<<endl;
    }

    return 0;
}
