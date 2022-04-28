#include <iostream>

using namespace std;

int main()
{
    int a,b,nri=0;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a+1;i<b;i++)
    {
        int aux=i,inv=0,c1,s=0;
        while(aux!=0)
        {
            c1=aux%10;
            inv=inv*10+c1;
            aux=aux/10;
        }
        s=i+inv;
        if(s%2==0)
        {
           cout<<i<<endl;
        }
    }


    return 0;
}
