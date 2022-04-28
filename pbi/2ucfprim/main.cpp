#include <iostream>

using namespace std;

int main()
{
    int n,k=1,i,aux1,c1,c2,nrp=0,s,s1;
    int ok=0;
    cout<<"n=";cin>>n;
    cout<<"i=";cin>>i;
    while(k!=n)
    {
        nrp=0;
        k=k+1;
        aux1=i;
        while(aux1!=0)
        {
            s=0;
            s1=0;
            c1=aux1%10;
            c2=(aux1/10)%10;
            s=c1*10+c2;
            while(ok==0)
            {
                for(int j=2;j<=s/2;j++)
              {
                  if(s%j==0)
                  {
                      ok=1;
                  }
              }
            }
            if(ok==0)
              {
                  cout<<"Numarul "<<i<<" nu are ultimele cifre un numar prim";
              }

        }
        cout<<"i=";cin>>i;
    }



    return 0;
}
