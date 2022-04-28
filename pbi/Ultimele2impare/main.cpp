#include <iostream>

using namespace std;

int main()
{
    int n,a,k=1,nri,aux,c1;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    while(k!=n)
    {
        nri=0;
        aux=a;
        while(nri!=2)
        {
            c1=aux%10;
            if(c1%2==1)
            {
                cout<<c1<<endl;
                nri++;
            }
            aux=aux/10;
        }
        cout<<"a=";cin>>a;
        k++;
    }
    return 0;
}
