#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");
ofstream g("bac.out");

int main(void)
{
    int a[1001],b[1001],n;
    f>>n;
    for(int i=1;i<=n;i++)
        f>>a[i]>>b[i];
    int nra=0;
    for(int i=1;i<=n;i++)
    {
        nra=0;
        for(int j=1;j<=n;j++)
        {
            if(a[i]>a[j] && b[i]<b[j])
               nra++;
            else if(a[i]<a[j] && b[i]>b[j])
               nra++;
            if(nra>1)
            break;
        }
        if(nra==0)
            cout<<a[i]<<" "<<b[i]<<endl;
    }
    return 0;
}