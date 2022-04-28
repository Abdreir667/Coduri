#include <fstream>

using namespace std;

ifstream cin("minpal.in");
ofstream cout("minpal.out");

int arr[1000001],nre=0,n;

int palindrom(int arr[],int start,int finish)
{
    int temp1=start,temp2=finish;
    while(temp1<temp2)
    {
        if(arr[temp1]==arr[temp2])
        {
            temp1++;
            temp2--;
        }
        else if(arr[temp1]>arr[temp2])
        {
            arr[temp2-1]+=arr[temp2];   
            arr[temp2]=-1;
            nre++;
            temp2--;
        }
        else
        {
            arr[temp1+1]+=arr[temp1];
            arr[temp1]=-1;
            nre++;
            temp1++;
        }
    }
    return nre;
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    cout<<palindrom(arr,1,n);
}