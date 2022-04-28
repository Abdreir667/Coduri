#include <iostream>

using namespace std;

int main()
{
    int n,p,v,nrd,j,nre,k,temp,nrp;
    bool conditie;
    cout<<"n=";cin>>n;
    cout<<"v=";cin>>v;
    cout<<"p=";cin>>p;
    if(v==1)
    {
        int s;
        s=p;
        temp=p+1;
        for(int i=1;i<=n-1;i++)
        {
            conditie=false;
            for(j=temp;j<=p+1000;j++)
            {
                nrd=0;
                nre=1;
                for(k=1;k<=j;k++)
                {
                    if(j%k==0)
                        nrd++;
                }
                if(k==j && nrd==2)
                    conditie=true;
                if(conditie=true && nrd==2)
                    break;
            }
            cout<<j<<endl;
            temp=j+1;
            s=s+j;
        }
        cout<<s<<endl;
    }
    if(v==2)
    {
        int s;
        s=p;
        temp=p+1;
        for(int i=1;i<=n-1;i++)
        {
            conditie=false;
            for(j=temp;j<=p+1000;j++)
            {
                nrd=0;
                nre=1;
                for(k=1;k<=j;k++)
                {
                    if(j%k==0)
                        nrd++;
                }
                if(k==j && nrd==2)
                    conditie=true;
                if(conditie=true && nrd==2)
                    break;
            }
            cout<<j<<endl;
            temp=j+1;
            s=s+j;
        }
        int temp2;
        temp2=s;
            if(temp2>100)
            {
                nrp=189;
                for(int i=100;i<=s;i++)
                    nrp+=3;
            }
            if(temp2<100 && temp2>10)
            {
                nrp=9;
                for(int i=10;i<=s;i++)
                    nrp+=2
            }
            if(temp2<10)
                nrp=temp2;
        cout<<nrp<<endl;
    }
}