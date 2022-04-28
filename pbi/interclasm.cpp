#include <fstream>

using namespace std;

ifstream cin("interclasm.in");
ofstream cout("interclasm.out");

int arr1[100001],arr2[100001],n,m,x;

/*void diferentastg(int arr1[],int arr2[],int max1,int max2)
{
    int var1=1,var2=1;
    while(var1<=max1 && var2<=max2)
    {
        if(arr1[var1]<arr2[var2])
        {
            if(arr1[var1]%x==0)
                cout<<arr1[var1]<<" ";
            var1++;
        }
        else if(arr1[var1]>arr2[var2])
            var2++;
        else if(arr1[var1]==arr2[var2])
            var1++,var2++;
    }
    if(var2-1==max2)
        for(int i=var1; i<=max1; i++)
            cout<<arr1[i]<<" ";
}*/

void diferentastg(int arr1[],int arr2[],int max1,int max2)
{
    int var1=1,var2=1;
    while(var1<=max1 && var2<=max2)
    {
        if(arr1[var1]<arr2[var2])
        {
            if(arr1[var1]%x==0)
                cout<<arr1[var1]<<" ";
            var1++;
        }
        else if(arr1[var1]>arr2[var2])
        {
            if(arr2[var2]%x==0)
                cout<<arr2[var2]<<" ";
            var2++;
        }
        else if(arr1[var1]==arr2[var2])
            var1++,var2++;
    }
    if(var2-1==max2)
        for(int i=var1; i<=max1; i++)
            if(arr1[i]%x==0)
            cout<<arr1[i]<<" ";
    if(var1-1==max1)
        for(int i=var2; i<=max2; i++)
            if(arr2[i]%2==0)
                cout<<arr2[i]<<" ";
}

int main(void)
{
    cin>>x>>n;
    for(int i=1;i<=n;i++)
        cin>>arr1[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>arr2[i];
    diferentastg(arr1,arr2,n,m);
}
