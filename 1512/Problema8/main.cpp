#include <iostream>

using namespace std;

int main()
{
    int a,b,ter1,ter2,ter3,aux,inv,c1;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        aux=i;
        inv=0;
        while(aux!=0)
        {
            c1=aux%10;
            inv=inv*10+c1;
            aux=aux/10;
        }
        ter1=1;
        ter2=1;
        ter3=0;
        while(ter3<inv)
        {
            ter3=ter1+ter2;
            ter1=ter2;
            ter2=ter3;
        }
     if(ter3==inv)
    cout<<i<<endl;


    }
    return 0;
}
