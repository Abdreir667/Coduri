#include <iostream>

using namespace std;

int main()
{
    int n,s=0,s1=0,r,r1,s2,s3,c;
    cout<<"n=";cin>>n;
    for(int x=1;x<=n;x++)
    {
        s=s+x;
    }
    s2=s;
    while(s!=0)
        {
            r=s%10;
            s1=s1+r;
            s=s/10;
        }
    s3=s1;
    c=s2/s3;
    r1=s2%s3;
    cout<<"Catul si restul imapartirii a sumei numerelor la suma cifelor sumei numerlor sunt:"<<c<<","<<r1;


    return 0;

}
