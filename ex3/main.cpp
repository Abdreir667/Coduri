#include <iostream>

using namespace std;

int main()
{
    int a,b,c,aux1,c1,s,ct,r;
    cout<<"a=";cin>>a;
    if(a!=0)
    {
        cout<<"b=";cin>>b;
            if(b!=0)
            {
                cout<<"c=";cin>>c;
                while(c!=0)
                {
                    s=0;
                    aux1=a;
                    while(aux1!=0)
                    {
                        c1=aux1%10;
                        s=c1+s;
                        aux1=aux1/10;
                    }
                    ct=a/s;
                    r=a%s;
                    if(ct==b && r==c)
                    {
                        cout<<a<<b<<c<<endl;
                    }
                    a=b;
                    b=c;
                    cout<<"c=";cin>>c;

                }
            }
    }
    return 0;
}
