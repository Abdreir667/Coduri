#include <iostream>

using namespace std;

int main()
{
    int n,r,s;
    cout<<"n=";cin>>n;
    for(int x=10;x<n;x++)
    {
        int aux=x;
        int aux2=aux;
        while(aux>0)
        {
            s=0;
            do
            {
            r=aux%10;
            s=s+r*r;
            aux=aux/10;
            }
            while(aux>0);
            if(aux2==s)
            cout<<"Cifrele sunt:"<<aux2<<endl;


        }

    }
    return 0;
}
