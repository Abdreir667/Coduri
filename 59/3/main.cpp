#include <iostream>

using namespace std;

int main()
{
    int n,n1,c1,c2,max,maxt;
    cout<<"n=";cin>>n;
    n1=n;
    do
    {
        while(n1%10!=0)
        {
            c1=n1%10;
            c2=((n1%100)-c1)/10;
            max=c1;
            max=maxt;
            if(c2>max)
            max=c2;
            max=maxt;
                cout<<c1<<";"<<c2<<"\n"<<"maxt="<<maxt<<"\n";
            n1=n1/10;


        }
        cout<<max<<"\n";
        cout<<"n=";cin>>n;
    }
    while(n!=0);

    return 0;
}
