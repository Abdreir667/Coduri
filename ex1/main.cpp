#include <iostream>

using namespace std;

int main()
{
    int a,b,aux,s=0,c1;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        aux=i;
        while(aux!=0)
        {
            s=0;
        while(aux!=0)
        {
        c1=aux%10;
        s=s*10+aux;
        aux=aux/10;
        cout<<s<<endl;
        }
        }
        if(s==i)
        {
            cout<<aux<<endl;
        }
    }

    return 0;
}
