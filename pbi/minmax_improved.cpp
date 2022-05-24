#include <fstream>

using namespace std;

ifstream cin("test.in");
ofstream cout("test.out");

int n,arr[1001];

void minmax(int arr[],int st,int dr)
{
    for(int i=0;i<=(st-dr)/2-1;i++)
    {
        int mini=INT_MAX,maxi=0;
        int pozmin,pozmax;
        for(int j=i+1;i<=dr-i;i++)
        {
            if(arr[j]>=maxi)
            {
                maxi=arr[j];
                pozmax=j;
            }
            if(arr[i]<mini)
            {
                mini=arr[j];
                pozmin=j;
            }
        }
        cout<<mini<<" "<<maxi<<endl;
        int p=1;
        swap(arr[i],arr[pozmax]);
        swap(arr[p],arr[pozmin]);
        p++;
    }
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    minmax(arr,1,n);
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}