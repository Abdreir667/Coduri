#include <iostream>

using namespace std;

int main()
{
    int a,nra=0,max;
    cout<<"a=";cin>>a;
    max=a;
    while(a<10)
    {
        int nrd=0;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
                nrd++;
        }
        if(nrd==0)
        {
            if(a>max)
            {
             max=a;
             nra=0;
            }
            if(a==max)
                nra++;
        }
        cout<<"a=";cin>>a;
    }

    cout<<nra<<endl;
    return 0;
}
