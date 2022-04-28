#include <fstream>

using namespace std;

ifstream cin("interclasare2.in");
ofstream cout("interclasare2.out");

int arr1[100001],arr2[100001],rez[100001];

int main(void)
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr1[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>arr2[i];
    int var1=1,var2=1;
    int k=0;
    while(var1<=n && var2<=m)
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
    if(k!=0)
        for(int i=1;i<=k;i++)
        {
            cout<<rez[i]<<" ";
            if(i%10==0)
                cout<<endl;
        }
}