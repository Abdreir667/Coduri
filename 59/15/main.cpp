#include <iostream>

using namespace std;

int main()
{
    int a,b,c,r1,aux,s=0;
    cout<<"a=";cin>>a;
    cout<<"a=";cin>>b;
    cout<<"a=";cin>>c;
    while(a!=0 || b!=0 || c!=0)
    {
      if(a<b && b<c)
      {
         aux=a;
          while(aux!=0)
          {
              r1=aux%10;
              s=s*10+r1;
              aux=aux/10;
          }
            if(b==a/s && c==a%s)
            {
                cout<<"Perechea este:("<<a<<";"<<b<<";"<<c<<")"<<endl;;
            }

      }



    cout<<"a=";cin>>a;
    cout<<"a=";cin>>b;
    cout<<"a=";cin>>c;
    }
    return 0;
}
