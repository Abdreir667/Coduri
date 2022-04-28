#include <iostream>

using namespace std;

int main()
{
    int a,b,c1,s,n,x;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    n=a;
    while(a<b && n<b)
    {
        n=a;
        x=n;
        s=0;
        while(x!=0)
        {
            c1=x%10;
            s=s*10+c1;
            x=x/10;
        }
        if(n==s)
        {
            cout<<n<<endl;
        }
        a=a+1;
    }
    return 0;
}
