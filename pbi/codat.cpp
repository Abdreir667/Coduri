#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int arr[10000],n,max=0,nr,k1,arrf[10000],k2;
    bool conditie=false,conditie2=false;
    fstream f("codat.in",ios::in);
    fstream g("codat.out",ios::out);
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        arr[i]=nr;
        if(arr[i]>=max)
            max=arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==max)
            arrf[i]=-1;
    }
    for(int i=1;i<=n;i++)
    {
        k1=1;
        k2=1;
        if(arrf[i]!=-1)
        {
            for(k1=1;k1<=10000;k1++)
            {
                if(arr[i+k1]>arr[i])
                    break;
            }
            for(k2=1;k2<=10000;k2++)
            {
                if(arr[i-k2]>arr[i])
                    break;
            }
            if(k1>k2)
                arrf[i]=i-k2;
            else arrf[i]=i+k1;
            if(k1==k2)
                arrf[i]=i+k1;
        }
        g<<arrf[i]<<" ";
    }
    return 0;
    f.close();
    g.close();
}               