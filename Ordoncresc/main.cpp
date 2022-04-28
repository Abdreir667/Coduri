#include <iostream>

using namespace std;

int main()
{
    int a,b,nrcc=0,nrc=0;
    cout<<"a=";cin>>a;
    while(a!=0)
    {
        if(a>b)
            {nrcc=nrcc+1;
            b=a;
            nrc=nrc+1;
        cout<<"a=";cin>>a;}
        else if(a<b)
        {
            nrc=nrc+1;
            cout<<"a=";cin>>a;
        }

    }
    cout<<"nrcc="<<nrcc<<"\n";
    cout<<"nrc="<<nrc<<"\n";
    if(nrc==nrcc)
        cout<<"Cifrele sirului sunt ordonate crescator";
    else if(nrc!=nrcc)
        cout<<"Cifrele sirului nu sunt ordonate crescator";

    return 0;
}
