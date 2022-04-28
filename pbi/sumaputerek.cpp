#include <iostream>

using namespace std;

int main()
{
    int n,k,a;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        int a1,b,c;
        a1=0;
        b=1;
        c=b*k;
        while(a1<=a)
        {
            a1=b;
            b=c;
            c=b*k;
            if(a1==a)
            {
                cout<<a1<<endl;
                return 0;
            }
            if(b>a)
            {
                cout<<a1<<" ";
                a=a-a1;
                a1=0;
                b=1;
                c=b*k;
            }
        }
    }
}