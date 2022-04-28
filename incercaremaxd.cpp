#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int a,b,e,tab1[1000],tab2[1000],temp2=1,nrd,j,temp3=1;
bool cond1=false;
bool cond2=false;
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;
for(int i=a;i<=b;i++)
{
    int temp;
    temp=i;
    temp2=1;
    nrd=1;
   for(j=2;j<=sqrt(i);j++)
        {
            e=0;
            if(temp%j==0)
            {
                cond1=true;
                while(temp%j==0)
                {       
                     e++;
                    temp=temp/j;
                }
            }
            if(e>0)
            {
                nrd=nrd*(e+1);
                if(cond1==true)
                {
                    tab1[temp2]=j;
                    temp2++;
                }
                    
            } 
            if(nrd>1 && j*j>i)
            nrd=nrd+2; 
        }
        temp3=1;
        for(int k=1;k<=temp2-1;k++)
            {
                if(nrd/tab1[k]==1)
                    temp3++;
                else temp3=temp3;
            }
        if(temp3!=temp2-1)
            nrd=nrd*2;
        else nrd=nrd; 
        if(2*nrd>i)
            nrd=nrd/2-1;     
    cout<<i<<" "<<nrd<<endl;

        
}
    return 0;
}