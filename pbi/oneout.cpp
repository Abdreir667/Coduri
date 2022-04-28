#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    ifstream f("oneout.in");
    ofstream g("oneout.out");
    int n,c,arr[1000000];
    f>>c>>n;
    for(int i=1;i<=n;i++)
        f>>arr[i];
    if(c==1)
    {
        bool cond = false;
        int nrf=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==1)
                nrf++;
            else 
            {
            cond=false;
            for(int j=2;j<=arr[i]/2;j++)
                if(arr[i]%j==0 && sqrt(j)==floor(sqrt(j)))
                {
                    cond=true;
                    break;
                }
            if(cond==false)
                nrf++;
            }
        }
        g<<nrf<<endl;
    }
    if(c==2)
    {
       bool verarr[100000]={0},cond=false;
       for(int i=1;i<=n;i++)
        {
            if(arr[i]==1)
                verarr[i]=true;
            else 
            {
            cond=false;
            for(int j=2;j<=arr[i]/2;j++)
                if(arr[i]%j==0 && sqrt(j)==floor(sqrt(j)))
                {
                    cond=true;
                    break;
                }
            if(cond==false)
                verarr[i]=true;
            }
        }
        int maxi=0,nra,nrap=1,x,y,temp=0,o=0;
        int poz1[100000],poz2[100000];
        for(int i=1;i<=n;i++)
        {
            nra=0;
            if(verarr[i]==0)
            {
                for(int j=1;j<=1000000;j++)
                {
                    if(verarr[i-j]==1)
                    {
                        nra++;
                        x=i-j;
                    }
                    else break;
                }
                for(int j=1;j<=1000000;j++)
                {
                    if(verarr[i+j]==1)
                    {
                        nra++;
                        y=j+i;
                    }
                    else break;
                }
                if(nra==maxi)
                {
                    nrap++;
                    poz1[++temp]=x;
                    poz2[++temp]=y;
                }
                else if(maxi<nra)
                {
                    maxi=max(maxi,nra);
                    nrap=1;
                    temp=0;
                    o=0;
                    poz1[++temp]=x;
                    poz2[++temp]=y;
                }
            }
        } 
        cout<<maxi<<" "<<nrap<<endl;;
        for(int i=1;i<=temp;i++)
            cout<<poz1[i]<<" "<<poz2[i]<<endl;
    }
    f.close();
    g.close();
    return 0;
}