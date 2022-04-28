#include <iostream>

using namespace std;

int main()
{
    int n,a,nrd,nri=0;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        if(a>0)
        {
        nrd=0;
        for(int j=2;j<=a/2;j++)
        {
            if(a%j==0)
                nrd++;
        }
        if(nrd==0 && a>=2)
        nri++;
        }
    }
    cout<<nri<<endl;

    return 0;
}
