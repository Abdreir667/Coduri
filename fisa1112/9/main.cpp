#include <iostream>

using namespace std;

int main()
{
    int n,nre=0,nr2=0,nr5=0,nr0=0;
    cout<<"n=";cin>>n;
    while(nre!=n)
    {
       if(nre%10==2)
        nr2++;
       if(nre%10==5)
        nr5++;
       if(nre%10==0)
        nr0++;
        nre++;
    }
    if(nr2==nr5)
        nr0=nr0+nr5;
    else
    {
        if(nr5>nr2)
            nr0=nr0+nr2;
        else
            nr0=nr0+nr5;
    }
    cout<<nr0<<endl;



    return 0;
}
