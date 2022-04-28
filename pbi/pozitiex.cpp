#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,x,arr[10000],nr,temp1,k;
    bool conditie=false;
    ifstream f("pozitiex.in");
    ofstream g("pozitiex.out");
    f>>x;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        arr[i]=nr;
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp1=arr[i];
                arr[i]=arr[j];
                arr[j]=temp1;
            }
        }
    for(int k=1;k<=n && conditie==false;k++)
        {
            if(arr[k]==x)
                {
                    g<<k<<endl;
                    conditie=true;
                }
        }
    if(conditie==false)
        g<<"NU EXISTA"<<endl;
    f.close();
    g.close();
    return 0;
}