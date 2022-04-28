#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,ok=1,r;
    cout<<"a=";cin>>a;
    for(int i=2;i<=a;i++)
    {
        int aux=i;
        for(int j=2;j<=i/2;j++)
        if(i==j*j)
        {
            r=a-i;
            for(int k=2;k<=r/2;k++)
                if(r==k*k)
                cout<<sqrt(i)<<sqrt(r)<<endl;
        }

    }

    return 0;
}
