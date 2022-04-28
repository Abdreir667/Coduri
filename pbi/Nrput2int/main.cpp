#include <iostream>

using namespace std;

int main()
{
    int a,b,n,nr1,k,k1=0;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"n=";cin>>n;
    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<=i;j++)
        {
        k=1;
        nr1=2;
        while(k!=j)
        {
            nr1=nr1*2;
            k++;
        }
        if(i==nr1)
        {
            while(k1!=n)
            {
                cout<<nr1<<endl;
                nr1=nr1*2;
                 k1++;
            }
        }
        }
    }
    return 0;
}
