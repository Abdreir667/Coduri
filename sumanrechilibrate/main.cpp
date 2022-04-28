#include <iostream>

using namespace std;

int main()
{
    int a,b,nri=0;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        int aux,nrc,nrcp,nrci,aux2,c1;
        nrcp=0;
        nrci=0;
        nrc=0;
        aux=i;
        aux2=i;
        while(aux!=0)
        {
            nrc++;
            aux=aux/10;
        }
        if(nrc%2==0)
        {
          while(aux2!=0)
          {
             c1=aux2%10;
             if(c1%2==0)
                nrcp++;
             else
                nrci++;
            aux2=aux2/10;
          }
          if(nrcp==nrci)
            nri++;
        }
    }
    cout<<nri<<endl;
    return 0;
}
