#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"a=";cin>>a;
    for(int i=1;i<=a*a-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i+j==a)
            {
                cout<<i<<j<<endl;
            }
        }
    }
    return 0;
}
