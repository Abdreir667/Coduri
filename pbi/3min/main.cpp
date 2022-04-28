#include <iostream>

using namespace std;

int main()
{
    int a,n,min=1000,min1,min2;
    cout<<"a=";cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<"n=";cin>>n;
        if(n<min)
            min=n;
    }
    cout<<min<<endl;
    return 0;
}
