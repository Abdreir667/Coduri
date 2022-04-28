#include <iostream>

using namespace std;

int main()
{
    int m,n,x,e,i,arr1[5000],arr2[5000],temp=1,nrd=0,temp1=0,nrf,r=1;
    bool cond1=true;
    cout<<"m=";cin>>m;
    cout<<"n=";cin>>n;
    for(int j=1;j<=n;j++)
    {
        temp=0;
        cout<<"x=";cin>>x;
        for(i=2;i<=x;i++)
        {
            e=0;
            if(x%i==0)
                while(x%i==0)
        {
            e++;
            x=x/i;
        }
        if(e!=0)
            {
                arr2[temp]=arr2[temp]+e;
                arr1[temp]=i;;
            }
             temp++;
        } 
    }
    for(int o=0; o<=5000; o++)
    {
        if(arr1[o]>1)
            if(arr2[o]%m!=0)
            {
             cond1=false;
             cout<<"0"<<endl;
                break;
            }

    }
    if(cond1=true)
    {
      cout<<"1"<<endl;
        for(int z=0; z<=temp; z++)
        if( arr2[z]>1)
           cout<<arr1[z]<<' '<<arr2[z]/m<<endl;
    }
    return 0;
}