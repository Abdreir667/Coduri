#include <iostream>

using namespace std;

int main()
{
    int k,a,b,c,p,aux1,c1,nra=0,pb,aux2,c2,nrb=0,pa;
    cout<<"k=";cin>>k;
    cout<<"a=";cin>>a;
    if(a!=0)
        cout<<"b=";cin>>b;
        while(b!=0)
        {
         pa=a*a;
         aux1=pa;
         while(aux1>0)
         {
             c1=aux1%10;
             if(c1==k)
             {
                 nra=nra+1;
             }
             aux1=aux1/10;
         }
         pb=b*b;
         aux2=pb;
         while(aux2>0)
         {
             c2=aux2%10;
             if(c2==k)
             {
                nrb=nrb+1;
             }
             aux2=aux2/10;

         }
         if(nra==nrb)
         {
            cout<<a<<b<<endl;
         }
         a=b;
         cout<<"b=";cin>>b;

        }

    return 0;
}
