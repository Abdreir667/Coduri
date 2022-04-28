#include <iostream>

using namespace std;

int main()
{
    int n,a,mc=1;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        int x,y;
        x=mc;
        y=a;
        if(x==0 || y==0)
            x=x+y;
        else while(x!=y)
        {
            if(x>y)
                x=x-y;
            else y=y-x;
        }
        mc=mc*a/x;
    }
    cout<<mc<<endl;
    return 0;
}