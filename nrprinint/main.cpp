#include <iostream>

using namespace std;

int main()
{
    int a,b,aux,a1,b1,r,div,a2,b2;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;

    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    else if(a<b)
    {
        a=a;
        b=b;
    }
    cout<<"Intervalul este:["<<a<<","<<b<<"]"<<"\n";
    a1=a;
    b1=b;
    for(int i=a;i<=b-1;i++)
    {
        for(int j=a+1;j<=b;j++)
        {
        cout<<"Perchile sunt:"<<i<<" "<<j<<"\n";
        while(b1!=0)
        {
            r=a1%b1;
            a1=b1;
            b1=r;
            div=a1+b1;
        if(div==1)
            {
            a2=a1;
            b2=b1;
            cout<<"Perechile cu numere prime intre ele sunt:("<<a2<<";"<<b2<<")"<<"\n";
            }

        }

        }
    }


    return 0;
}
