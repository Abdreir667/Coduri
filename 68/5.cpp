#include <iostream>

using namespace std;

int main()
{
    int n,a,nrd;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        nrd=0;
        for(int j=2;j<=a/2;j++)
            if(a%j==0)
                if(j%2==0)
                {
                    nrd++;
                    cout<<j<<endl;
                }
        if(nrd==0)
            cout<<"Numarul nu are divizori pari"<<endl;
    }
    return 0;
}