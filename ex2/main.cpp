#include <iostream>

using namespace std;

int main()
{
    int a,b,pb,pa,c1,c2,nra=0,nrb=0,k;
    cout<<"k=";cin>>k;
    cout<<"a=";cin>>a;
        if(a!=0)
        {

            cout<<"b=";cin>>b;
            while(b!=0)
        {
            pa=a*a;
            while(pa!=0)
            {
                c1=pa%10;
                if(c1==k)
                {
                    nra=nra+1;
                }
                pa=pa/10;
            }
            pb=b*b;
            while(pb!=0)
            {
                c2=pb%10;
                if(c2==k)
                {
                    nrb=nrb+1;
                }
                pb=pb/10;
            }
            if(nrb==nra)
            {
                cout<<a<<b<<endl;
            }
            a=b;
            cout<<"b=";cin>>b;
        }
        }
    return 0;
}
