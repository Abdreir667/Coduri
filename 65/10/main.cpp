#include <iostream>

using namespace std;

int main()
{
    int n,nrd,nrd1,k=0,k1=0;
    cout<<"n=";cin>>n;
    for(int i=n;i>=1;i++)
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
        if(k==1)
            break;
    }
    for(int h=n;h>=1;h--)
    {
        nrd1=0;
        for(int l=2;l<=h/2;l++)
            if(h%l==0)
                nrd1++;
        if(nrd1==0)
        {
            cout<<h<<endl;
            k1++;
        }
        if(k1==1)
            break;
    }
    return 0;
}
