#include <iostream>

using namespace std;

int main()
{
    int arr[1000],m,nr;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>nr;
        arr[i]=nr;
    }
    for(int i=1,j=0;i<=m;i++)
    {
        int nrd=0;
            if(arr[i]!=1)
            {
            for(int k=2;k<=arr[i]/2;k++)
                if(arr[i]%k==0)
                    nrd++;
            if(nrd!=0)
            {
                arr[++j]=arr[i];
                cout<<arr[j]<<" ";
            }
        }
        else if(arr[i]==1)
        {
            arr[++j]=1;
            cout<<arr[j]<<" ";
        }
    }
    return 0;
}