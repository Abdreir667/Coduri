#include <iostream>

using namespace std;

int main()
{
    int a,b,s=0;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        if(i%6!=0)
            s=s+i;
    }
    cout<<s<<endl;
    return 0;
}
