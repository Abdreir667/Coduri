#include <fstream>

using namespace std;

ifstream cin("sortminmax.in");
ofstream cout("sortminmax.out");

int arr[1001],mini=1000001,maxi=0,n,poz1,poz2;

void quicsort(int arr[],int st,int dr)
{
    if(st<dr) 
    {
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicsort(arr,st,i-1);
        quicsort(arr,i+1,dr);
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        mini=min(mini,arr[i]);
        if(arr[i]==mini)
            poz1=i;
        maxi=max(maxi,arr[i]);
        if(arr[i]==maxi)
            poz2=i;
    }
    quicsort(arr,poz2,poz1);
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}

