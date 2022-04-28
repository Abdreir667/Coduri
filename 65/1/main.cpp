#include <iostream>

using namespace std;

int main()
{
    int n,k=1,nrd;
    cout<<"n=";cin>>n;
    for(int i=2;i<=100000;i++)
    {
        nrd=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
            nrd++;
        if(nrd==0)
        {
            cout<<i<<endl;
            k++;
        }
            if(k>n)
            break;
    }
    return 0;
}
