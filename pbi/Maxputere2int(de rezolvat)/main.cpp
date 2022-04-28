#include <iostream>
//Se dau n perechi de numere naturale a, b. Să se determine pentru fiecare pereche, dacă există, cea mai mare putere a lui 2 din intervalul determinat de a şi b.

using namespace std;

int main()
{
    int a,b,n,k=0,nrp,max;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    if(a!=0)
    {
        cout<<"b=";cin>>b;
        k++;
        while(n!=k)
        {
            max=1;
            for(int i=a;i<=b;i++)
            {
            nrp=0;
            int aux=i;
            while(aux!=1)
              {
                 if(aux%2==0)
                 {
                     nrp++;
                     aux=aux/2;
                 }
              }
              if(nrp>max)
                max==nrp;
            }
            cout<<max<<endl;
            a=b;
            cout<<"b=";cin>>b;
            k++;
        }
    }

    return 0;
}
