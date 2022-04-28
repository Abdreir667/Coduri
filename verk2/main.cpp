#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"a=";cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a==i*i)
        cout<<a<<endl;
    }
    return 0;
}
