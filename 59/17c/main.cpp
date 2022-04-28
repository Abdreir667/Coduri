#include <iostream>

using namespace std;

int main()
{
    int k,n,y,r,r1,nra=0,nra1=0,p1,p2;
    cout<<"k=";cin>>k;
    if(k>9)
    {
       cout<<"Introduceti k<10"<<endl;
       cout<<"k=";cin>>k;
    }
    cout<<"n=";cin>>n;
    y=n;
    while(n!=0)
    {

        y=n;
        if(y<n)
        {
            p1=y*y;
            p2=n*n;
            while(p1>0)
            {
                r=p1%10;
                p1=p1/10;
                if(r=k)
                    nra=nra+1;
                else
                {nra=nra;}
            }
            while(p2>0)
            {
                r1=p2%10;
                p2=p2/10;
                if(r1=k)
                {
                    nra1=nra1+1;
                }
                else
                {nra1=nra1;}
                cout<<"n=";cin>>n;
            }


        }
        else
               {cout<<"n=";cin>>n;}


    if(nra==nra1)
            {
                cout<<n<<" "<<y<<endl;
            }


    }


    return 0;
}
