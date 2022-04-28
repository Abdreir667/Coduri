#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a=";cin>>a;
    while(a!=0)
    {
        b=a;
        if(a>b)
            {cout<<"Numerele sunt ordonate crecator";}
        else if(b<a)
            {cout<<"Numerele nu sunt ordoate crescator";}
        cout<<"a=";cin>>a;
    }
    return 0;
}
