#include <iostream>

using namespace std;

int main()
{
    int cf,cf1,n,cf2,max;
    cout<<"n=";cin>>n;
    cf=n%10;
    cf1=(n%100-cf)/10;
    if(cf>cf1)
        max=cf;
    else if(cf<cf1)
        max=cf1;
    do
    {
        while(n/10!=0)
        {
            cf2=(n%1000-10*cf1-cf)/100;
            if(cf2>max)
                max=cf2;
            else if(cf2<max)
                max=max;
            n=n/10;

        }
        cout<<"max="<<max<<"\n";
        cout<<"n=";cin>>n;
    }
    while(n!=0);
    return 0;
}
