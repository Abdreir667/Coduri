#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,a,nrd,min=1000,cas=0,i;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        nrd=0;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            nrd++;
        }
        if(nrd<min)
        {
            min=nrd;
            cas=1;
        }
        if(nrd==min)
            cas++;
    }
    cout<<min<<endl;
    cout<<cas<<endl;
}