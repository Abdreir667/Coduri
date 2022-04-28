#include <iostream>

using namespace std;

int main()
{
    int a,aux,k=0;
    cout<<"a=";cin>>a;
    aux=a;
    for(int i=1;i<=(a*(a+1)/2);i=i+k+1)
    {
        int aux1=i;
      for(int j=1;j<=aux1;j++)
      {
            int aux2=j;
            for(int l=1;l<=j;l++)
            {
                if(l+j==a)
                {
                    cout<<j<<l<<endl;
                }
            }
      }
    }
    return 0;
}
