
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream f("vase1.in");
    ofstream g("vase1.out");
    int n,x,arr[100001];
    long long int si=0,stg,dre,sf=0;
    char part[100001];
    f>>n;
    for(int i=1; i<=n; ++i)
    {
        f>>arr[i]>>part[i];
        si+=arr[i];
    }
    f>>x;
    for(int i=1; i<x; ++i)
        sf+=arr[i];
    sf/=2;
    int i=x;
    if(part[i]=='S')
         stg = -sf-arr[i]/2, dre = -sf + arr[i]/2;
    else
        stg = sf-arr[i]/2, dre = sf + arr[i]/2;
    for(i = x+1 ; i<=n ; ++i){
        if(part[i]=='S')
            stg = stg+arr[i]/2, dre = dre + arr[i]/2;
        else
            stg = stg-arr[i]/2, dre = dre - arr[i]/2;
    }
    g<<si/2<<endl;
    if(stg>=0)
        g<<dre<<" D"<<endl<<stg<<" D"<<endl;
    else
        if(dre<=0)
            g<<-stg <<" S"<<endl<< -dre <<" S"<<endl;
        else
            g<<-stg<<" S"<<endl<<dre<<" D"<<endl;
    return 0;
}