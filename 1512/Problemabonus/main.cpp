#include <iostream>
//Sa se afiseze toate perechile de numere din intervalul [a,b] care au proprietatea ca sumele cifrelor lor au aceeasi paritate

using namespace std;

int main()
{
    int a,b;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b-1;i++)
    {
        int aux,sci,c1,aux1,scj,c2;
        aux=i;
        sci=0;
        while(aux!=0)
        {
            c1=aux%10;
            sci=scj+c1;
            aux=aux/10;
        }
        for(int j=i+1;j<=b;j++)
        {
           aux1=j;
           scj=0;
           while(aux1!=0)
           {
            c2=aux1%10;
            scj=scj+c2;
            aux1=aux1/10;
           }
           if(sci%2==0 && scj%2==0)
           {
               cout<<i<<j<<endl;
           }
           if(sci%2==1 && scj%2==1)
           {
               cout<<i<<j<<endl;
           }
        }
    }
    return 0;
}
