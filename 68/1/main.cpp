#include <iostream>

using namespace std;

int main()
{
    int n,nrd,s=0,p=1;
    cout<<"n=";cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            nrd=0;
            for(int j=2;j<=i/2;j++)
                if(i%j==0)
                    nrd++;
        }
        if(nrd==0)
        {
        s=s+i;
        p=p*i;
        }
    }
    cout<<s<<" "<<p<<endl;
    return 0;
}
