#include <iostream>

using namespace std;

int main()
{
    int a,nre;
    cout<<"a=";cin>>a;
    for(int i=2;i<=a;i++)
    {
        nre=0;
        if(a%i==0)
        {
            while(a%i==0)
            {
                a=a/i;
                nre++;
            }
        }
        if(nre!=0)
            cout<<i<<nre<<endl;

    }
    return 0;
}
