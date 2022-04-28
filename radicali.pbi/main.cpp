#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("radicali.in");
    ofstream g("radicali.out");
    int m,n,x,e,i,arr1[5000],arr2[5000],temp=1,nrd=0,temp1=0,nrf,tempmax=1;
    bool cond1=true;
    f>>m;
    f>>n;
    for(int j=1;j<=n;j++)
    {
        temp=0;
        f>>x;
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
                arr1[temp]=i;
            }
             temp++;
             if(tempmax<temp)
                tempmax=temp;
        }
    }
    for(int o=0; o<=tempmax; o++)
    {
        if(arr1[o]>1)
            if(arr2[o]%m!=0)
            {
             cond1=false;
             g<<"0"<<endl;
            break;
            }
    }
    if(cond1==true)
    {
      g<<"1"<<endl;
        for(int k=0; k<=tempmax; k++)
        if( arr2[k]>=1)
           g<<arr1[k]<<' '<<arr2[k]/m<<endl;
    }
    f.close();
    g.close();
    return 0;
}
