#include <iostream> 
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,arr[1000],nr,nrc;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        int temp,nri;
        temp=nr;
        nrc=0;
        while(temp!=0)
        {
            temp=temp/10;
            nrc++;
        }
        nri=pow(10,nrc-1);
        arr[i]=nr/nri;
    }
    sort(arr,arr+n+1);
    for(int i=1;i<=n;i++)
        cout<<arr[i];
}