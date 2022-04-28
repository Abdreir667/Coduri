#include <iostream>

using namespace std;

int main()
{
    int a,b,c,s=0,r,aux;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(c=a;c<=b;c++)
    {
            while(c>0)
            {

            r=c%10;
            s=s*10+r;
            c=c/10;
            cout<<s;
            }
            if(aux==s)
                cout<<s;

    }




    return 0;
}
