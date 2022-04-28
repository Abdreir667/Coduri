#include <iostream>

using namespace std;

int main()
{
    int a,b,s1,s2,c1,c2,aux,aux1;
    cout<<"a=";cin>>a;
    if(a!=0)
        cout<<"b=";cin>>b;
        while(b!=0)
        {

            aux=a;
            s1=0;
            while(aux!=0)
            {
                c1=aux%10;
                s1=c1+s1;
                aux=aux/10;
            }
            aux1=b;
            s2=0;
            while(aux1!=0)
            {
                c2=aux1%10;
                s2=s2+c2;
                aux1=aux1/10;
            }
            if(s1%2==0 && s2%2!=0)
            {
                cout<<a<<" "<<b<<endl;
            }
            a=b;
            cout<<"b=";cin>>b;

        }
    return 0;
}
