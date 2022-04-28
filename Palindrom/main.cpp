#include <iostream>

using namespace std;

int main()
{
            int c,aux,s,r;
            cout<<"c=";cin>>c;
            aux=c;
            while(c>0)
            {
            r=c%10;
            s=s*10+r;
            c=c/10;
            }
            if(aux==s)
                cout<<"Numarul este palindrom";
            else if(aux!=s)
                cout<<"Numarul nu este un palindrom";
    return 0;

}
