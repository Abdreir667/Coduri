#include <fstream>

using namespace std;

ifstream cin("file.in");
ofstream cout("file.out");

int arr1[100001],arr2[100001],rez[200001];

int main(void)
{
    int m,n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr1[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>arr2[i];
    int var1=1,var2=1,k=0;
    while(var1<=n && var2<=m)
    {
        if(arr1[var1]<arr2[var2])
        {
            if(arr1[var1]%2==0)
                rez[++k]=arr1[var1++];
            else var1++;
        }
        else if(arr1[var1]>arr2[var2])
            if(arr2[var2]%2==0)
                rez[++k]=arr2[var2++];
            else var2++;
        
    }
    if(var2-1==m)
        for(int i=var1;i<=n;i++)
            if(arr1[i]%2==0)
            rez[++k]=arr1[i];
    else if(var1-1==n)
        for(int i=var2;i<=m;i++)
            if(arr2[i]%2==0)
            rez[++k]=arr2[i];
    for(int i=1;i<=k;i++) 
    {
        cout<<rez[i]<<" ";
        if(i%20==0)
            cout<<endl;
    }
    return 0;
}

