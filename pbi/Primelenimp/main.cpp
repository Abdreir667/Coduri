#include <iostream>

using namespace std;

int main()
{
    int n,nrd,k=1,i;
    cout<<"n=";cin>>n;

        for(i=2;i<=10000;i++)
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
    while(k==n);
    return 0;
}
