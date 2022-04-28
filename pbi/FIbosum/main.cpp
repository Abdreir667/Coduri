#include <iostream>

using namespace std;

int main()
{
    int a,nr,b,c,s;
    cout<<"nr=";cin>>nr;
        a=0;
        b=1;
        c=a+b;
        while(a<=nr)
        {
            a=b;
            b=c;
            c=a+b;
            if(a==nr) {cout<<a; return 0;}
            if(b>nr) cout<<a<<" ",nr=nr-a, a=1, b=1, c=a+b;
        }
    return 0;
}
