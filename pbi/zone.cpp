#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("zone.in");
    ofstream g("zone.out");
    bool conditie=true;
    int n,nr;
    f>>n;
    int arr[3*n],temp1;
    for(int i=1;i<=3*n;i++)
    {
        f>>nr;
        arr[i]=nr;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            for(int j=3*n;j>=2*n;j--)
            {
                if(arr[j]%2==1)
                {
                    temp1=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp1;
                    conditie=false;
                }
                if(conditie==false)
                    break;
            }
            if(conditie==false)
                break;

        }

    }
    for(int i=1;i<=3*n;i++)
        g<<arr[i]<<" ";
    f.close();
    g.close();
    return 0;
}