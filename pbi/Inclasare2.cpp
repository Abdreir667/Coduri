#include <fstream>

using namespace std;

ifstream cin("interclasare3.in");
ofstream cout("interclasare3.out");

int arr1[100001],arr2[100001],rez[100001],k=0;

int main(void)
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) 
        cin>>arr1[i];
    for(int i=1;i<=m;i++) 
        cin>>arr2[i];
    int var1=1,var2=m;
    while(var1<=n && 1<=var2)
    {
        if(arr1[var1]<arr2[var2])
        {
            if(arr1[var1]%2==0)
                rez[++k]=arr1[var1];
            var1++;
        }
        else
        {
            if(arr2[var2]%2==0)
                rez[++k]=arr2[var2];
            var2--;
        }
    }
    if(var1-1==n)
        for(int i=var2;i>=1;i--)
            if(arr2[i]%2==0)
                rez[++k]=arr2[i];
    else if(var2+1==1)
        for(int i=1;i<=n;i++)
            rez[++k]=arr1[i];
    for(int i=1;i<=k;i++)
    {
        cout<<rez[i]<<" ";
        if(i%20==0)
            cout<<endl;
    }

}