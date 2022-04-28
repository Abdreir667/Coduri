#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,p=1.00,radf;
    int m,n,tab1[5000],tab2[5000],nre,nret=0,nreo=0,jt=0,rat=1;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(int i=1;i<=n;i++)
    {
        cout<<"x=";cin>>x;
        p=p*x;
    }
    
    radf=std::pow(p,1.0/m);
    if(floor(radf)==radf)
        {
            cout<<1<<endl;
            nret=0;
            nreo=0;
            int radf1=floor(radf);
             for(int j=2;j<=radf;j++)
             {
                nre=0;
                if(radf1%j==0)
                {
                    jt++;
                    while(radf1%j==0)
                    {
                         nre++;
                         nret++;
                        radf1=radf1/j;
                    }
                }
                if(nre!=0)
                    {
                        tab1[rat]=j;
                        tab2[rat]=nre;
                        rat++;
                    }
             }
            
        }
    else 
        cout<<"0"<<endl;
    for(int j=1;j<=jt;j++)
    {
        cout<<tab1[j]<<" ";
        cout<<tab2[j]<<endl;
    }
    return 0;
}