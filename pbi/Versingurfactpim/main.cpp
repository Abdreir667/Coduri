#include <iostream>

using namespace std;

int main()
{
    int a,n,nre,j,nrj,snrj=0;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        int aux;
        aux=a;
        nrj=0;
        for(j=2;j<=a/2;j++)
        {
            nre=0;
            if(aux%j==0)
            {
                    nrj++;
                    while(aux%j==0)
                    {
                        aux=aux/j;
                        nre++;
                    }
            }
        }
         snrj=snrj+nrj;
         if(nrj==1)
            cout<<a<<endl;
    }
    if(snrj!=n)
        cout<<"Nu exista numere care sa aiba doar un factor prim in sirul dat"<<endl;
    return 0;
}
