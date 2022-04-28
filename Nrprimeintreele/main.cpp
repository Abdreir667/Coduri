#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    if(a==1)
        cout<<"Numerele sunt prime intre ele"<<endl;
    else
        cout<<"NUmerele nu sunt prime intre ele"<<endl;
    return 0;
}
