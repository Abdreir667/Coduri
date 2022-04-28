#include <iostream>

using namespace std;

int main()
{
    int a,max,aux,nrc=0,nre=0,poz=1;
    cout<<"a=";cin>>a;
    max=0;
    aux=a;
    while(a>=0)
    {
        if(a>max)
            max=a;
        else
            max=max;
        cout<<"a=";cin>>a;
        nrc++;
        if(a>max)
        {
            poz++;
        }
    }
    cout<<poz<<endl;
    return 0;
}
