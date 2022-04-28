#include <iostream>

using namespace std;

int main()
{
    int a,b,p=1,nrd,j;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    for(int i=a;i<=b;i++)
    {
        p=1;
        for(int j=1;j<=i;j++)
        {

            nrd=0;
            for(int k=2;k<=j/2;k++)
            {
                while(p<i)
                {
                nrd=0;
                p=1;
                if(j%k==0)
                    {
                    nrd=nrd+1;
                    }
                if(nrd==0)
                {
                    p=p*j;
                }
                }
            }
        if(p==i)
        {
            cout<<p<<endl;

        }



        }
    }
    return 0;
}

