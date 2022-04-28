#include <iostream>

using namespace std;

int main()
{
    int n,a,e,nrd,nre,k,k1=1;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    while(k1!=n)
    {
        int aux=a;
        while(aux!=0)
        {
            for(int j=2;j<=aux;j++)
            {
                nre=0;
                if(aux%j==0)
                    while(aux%j==0)
                {
                    nre++;
                    aux=aux/j;
                }
                nrd=0;
                for(k=2;k<=j/2;k++)
                    if(j%k==0)
                        nrd++;
                if(nrd==0 && nre!=0)
                    cout<<j<<nre<<endl;
            }
        }
         cout<<"a=";cin>>a;
        k1++;
    }
    return 0;
}
