#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,nr,nre=0,poz1,poz2;

int main(void)
{
    cin>>n;
    vector<long long> sum(n+1);
    sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        sum[i]=sum[i-1]+nr;
        if(nr%2==1)
        {
            if(nre==0)
                poz1=i;
            else poz2=i;
            nre++;
        }
    }
    sort(sum.begin(),sum.end());
    cout<<sum[poz2]-sum[poz1-1]<<endl;
}