#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n;
    cout<<"n=";cin>>n;
    while(n>0)
    {
        a=1;
        b=1;
        c=0;
        while(n>c)
        {
           c=a+b;
           a=b;
           b=c;
        }
        if(n==c || n==1)
        {
            cout<<"Apartine sirului lui Fibonacci"<<endl;;
        }
        cout<<"n=";cin>>n;
    }
    return 0;
}
