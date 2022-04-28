#include <iostream>
#include <fstream>
using namespace std;
int arr[10001],n,c1=0,c2=0,maxi=0;
int main()
{
    ifstream cin("secvcresc.in");
    ofstream cout("secvcresc.out");
    cin>>n;
    for(int i=1; i<=n;i++)
        cin>>arr[i];
     for(int i=2;i<=n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            int nr=arr[i];
            int k=i;
            int temp1=i,temp2;
            while(k<=n && arr[k-1]<arr[k])
            {
                temp2=k;
                k++;
            }
            i=k;
            int temp3=temp2-temp1-1;
            if(temp3>maxi && (c1<temp1 && c2<temp2))
            {
                c1=temp1-1;
                c2=temp2;
                maxi=temp3;
            }
        }
    }
    cout<<c1<<" "<<c2;

    return 0;
}