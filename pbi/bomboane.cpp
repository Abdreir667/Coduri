#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bomboane2.in");
ofstream g("bomboane2.out");

int main(void)
{
    int n,arr[100001];
    f>>n;
    bool cond = false;
    for(int i=1;i<=n;i++)
        f>>arr[i];
    int nrb=0;
    while(cond!=true)
    {
        for(int j=1;j<=n;j++)
        {
            arr[j]-=nrb;
            if(arr[j]<nrb)
                cond=true;
            nrb++;
        }
    }
    int nrbt=(nrb*(nrb+1))/2;
    g<<nrbt<<endl;
}