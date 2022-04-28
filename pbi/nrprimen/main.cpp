#include <iostream>

using namespace std;

int main()
{
    int n,k,i,nrd;
    cout<<"n=";cin>>n;
    for(int i=2;i<=n*2;i++)
    {
        for(int j=2;j<=n;j++)
        if(i%j==0)
        nrd++;
        if(nrd==0)
            cout<<i<<endl;
    }
    return 0;
}
