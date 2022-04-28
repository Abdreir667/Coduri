#include <iostream>

using namespace std;

int main()
{
    int a,r,s=0,r1,s1=0;
    cout<<"a=";cin>>a;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    cout<<s<<endl;
    while(s>0)
    {
        r1=s%10;
        s1=(s1*10)+r1;
        s=s/10;

    }
    cout<<"Inversul sumei cifrelor este:"<<s1;
    return 0;
}
