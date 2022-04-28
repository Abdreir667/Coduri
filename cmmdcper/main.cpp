#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y,dc;
    cout<<"a=";cin>>a;
    if(a!=0)
        cout<<"b=";cin>>b;
        while(b!=0)
        {
            x=a;
            y=b;
            while(x!=y)
            {
                if(x>y)
                {
                    x=x-y;
                }
                if(y>x)
                {
                    y=y-x;
                }
            }
            dc=x;
            cout<<dc<<endl;
            a=b;
            cout<<"b=";cin>>b;
        }
    return 0;
}
