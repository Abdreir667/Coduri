#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("comun.in");
ofstream cout("comun.out");

int arr1[100000001],arr2[100000001],arr3[100000001],var1,var2,rez[10001],n,k=0;

void intersectie(int arr1[],int arr2[],int max1,int max2)
{
    var1=1,var2=1;
    while(var1<=max1 && var2<=max2)
    {
        if(arr1[var1]!=arr2[var2])
        {
            if(arr1[var1]<arr2[var2])
                var1++;
            else var2++;
        }
        else 
        {
            rez[++k]=arr1[var1];
            var1++;
        }
    }
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr1[i];
    for(int i=1;i<=n;i++)
        cin>>arr2[i];
    for(int i=1;i<=n;i++)
        cin>>arr3[i];
    intersectie(arr1,arr2,n,n); 
    var1=1,var2=1;
    while(var1<=k && var2<=n)
    {
        if(rez[var1]!=arr3[var2])
        {
            if(rez[var1]<arr3[var2])
                var1++;
            else var2++;
        }
        else 
        {
            cout<<rez[var1];
            break;
        }
    }
}