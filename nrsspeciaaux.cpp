#include <iostream>
#include <fstream>

using namespace  std;

int main()
{
    int n,arr[1000],sn,k,max=0,nr;
    ifstream f("nrspecial.in");
    ofstream g("nrspecial.out");
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        arr[i]=nr;
    }
    bool conditie1,conditie2,conditie3,connditiefin;
    for(int i=2;i<=n-1;i++)
    {
        int temp,nrv1,nrv2;
        bool conditie1,conditie2,conditie3;
        temp=arr[i];
        conditie1=true;
        conditie2=true;
        conditie3=true;
        sn=0;
        while(temp!=0)
        {
            sn=sn+temp%10;
            temp=temp/10;
        }
        if(sn%9==0)
        {
            k=1;
            for(int j=1;i<=1000;j++)
            {
                nrv1=arr[i-k];
                nrv2=arr[i+k];
                if(arr[i-k]==1 || arr[i+k]==1)
                {
                    conditie3=false;
                    break;
                }
                for(int j=2;conditie1==true && j<=nrv1/2;j++)
                    if(nrv1%j==0)
                        conditie1=false;
                    else conditie1=true;
                for(int j=2;conditie2==true && j<=nrv2/2;j++)
                    if(nrv2%j==0)
                        conditie2=false;
                    else conditie2=true;
                if((conditie1==true && conditie2==true) && conditie3==true)
                {
                    k++;
                    connditiefin=true;
                }
                else
                {
                    connditiefin=false;
                    break;
                }
            }
            while(connditiefin==false);     
            if(k>max)
                max=k;
        }
    }
    cout<<max<<endl;
}

