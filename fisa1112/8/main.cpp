#include <iostream>

using namespace std;

int main()
{
    int a,nr5=0,nr2=0,nr0=0;
    cout<<"a=";cin>>a;
    while(a!=0)
    {
        int aux=a;
        if(a%10==0)
        {
            while(aux%10==0)
            {
                nr0++;
                aux=aux/10;
                cout<<nr0<<endl;
            }
            if(aux%10==2)
            {
                nr2++;
                cout<<nr2<<endl;
            }
            if(aux%10==5)
            {
                nr5++;
                cout<<nr5<<endl;
            }
        }

        if(a%10==2)
            nr2++;
        if(a%10==5)
            nr5++;
        cout<<"a=";cin>>a;

    }
    if(nr5>nr2)
            nr0=nr0+nr2;
        else
            nr0=nr0+nr5;
    if(nr2==nr5)
            nr0=nr0+nr2;
    if(nr0>0)
        nr0=nr0-1;
    else nr0=nr0;
    cout<<nr0<<endl;
    return 0;
}
