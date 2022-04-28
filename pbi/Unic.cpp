#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("unice.in");
    ofstream g("unice.out");
    int n,nr,arr[1000],nrap=0,a,nri=0;
    bool conditite;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        conditite=false;
        f>>nr;
        arr[i]=nr;
        for(int j=1;j<=i-1;j++)
            if(arr[i]==arr[j])
            {
                nri++;
                conditite=true;
                break;
            }
        if(conditite==false)
            nrap++;
    }
    cout<<nri<<endl;
    g<<nrap-1<<endl;
    f.close();
    g.close();
    return 0;     
}