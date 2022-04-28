#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,nr,sn,or0=0,arr[1000],or1=0,k,max=0,k1,k2,kfin;
    bool connditiefin=false;
    ifstream f("nrspecial.in");
    ofstream g("nrspecial.out");
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        arr[i]=nr;
    }
    for(int i=1;i<=n;i++)
    {
        int temp;
        temp=arr[i];
        sn=0;
        while(temp!=0)
        {
            sn=sn+temp%10;
            temp=temp/10;
        }
        if(sn%9==0)
            or0++;
    }
    for(int i=2;i<=n-1;i++)
    {
            int temp,nrv1,nrv2;
            bool conditie1,conditie2;
            conditie1=true;
            conditie2=true;
            temp=arr[i];
            nrv1=arr[i-1];
            nrv2=arr[i+1];
            sn=0;
            while(temp!=0)
            {
                sn=sn+temp%10;
                temp=temp/10;
            }
            for(int j=2;conditie1==true && j<=nrv1/2;j++)
                if(nrv1%j==0)
                    conditie1=false;
            for(int j=2;conditie2==true && j<=nrv2/2;j++)
                if(nrv2%j==0)
                    conditie2=false;
            if((conditie1==true && conditie2==true) && sn%9==0)   
                or1++;
            if(arr[i+1]==1 || arr[i-1]==1)
                or1--;
    }
    for(int i=1;i<=n;i++)
    {
        int temp,nrv1,nrv2;
        bool conditie1,conditie2,conditie3;
        temp=arr[i];
        conditie1=true;
        conditie2=true;
        sn=0;
        while(temp!=0)
        {
            sn=sn+temp%10;
            temp=temp/10;
        }
        if(sn%9==0)
        {
            for(k1=1;k1<=1000;k1++)
            {
                nrv1=arr[i+k1];
                for(int l=2;l<=nrv1/2;l++)
                    if(nrv1%l==0)
                    {
                        conditie1=false;
                        break;
                    }
                if(conditie1==false)
                    break;
            }
            for(k2=1;k2<=1000;k2++)
            {
                nrv2=arr[i-k2];
                for(int o=2;o<=nrv2/2;o++)
                    if(nrv2%o==0)
                    {
                        conditie2=false;
                        break;
                    }
                if(conditie2=false)
                    break;
            }
            if(k1>k2)
                kfin=k2;
            else kfin=k1;
            if(kfin>max)
                max=kfin;
            else max=max;
        }
    }
    g<<or0<<endl;
    g<<or1<<endl;
    g<<max-1;
    f.close();
    g.close();
}