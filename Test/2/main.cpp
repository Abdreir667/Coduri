#include <iostream>

using namespace std;

int main()
{
    int a,b,aux1,aux2,s;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=b;i>=a;i--)
    {
        aux1=i;
        aux2=i;
        s=0;
        for(int j=1;j<=aux1/2;j++)
        {
            if(aux2%j==0)
            {
                s=s+j;
            }
        }
        if(s==i)
            {
                cout<<i<<endl;
            }



    }
    return 0;
}
