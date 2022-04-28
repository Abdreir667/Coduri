#include <iostream>

using namespace std;

int main()
{
    int a,c,uc,k=0;
    cout<<"a=";cin>>a;
    cout<<"c=";cin>>c;
    while(a!=0)
    {
        uc=a%10;
        a=a/10;
        if(uc==c)
            k=1;
        else if(uc!=0)
            k=0;
    }
    cout<<"k="<<k<<"\n";
    if(k==1)
        {cout<<"Numarul are cifra "<<c<<" in el.";}
    if(k==0)
        {cout<<"Numarul nu are cifra "<<c<<" in el";}

    return 0;
}
