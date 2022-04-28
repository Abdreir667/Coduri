#include <iostream>
#include <fstream>

using namespace std;

void quicksort(short arr[],short st,short dr){
    if(st<dr)
    {
        int m=(st+dr)/2;
        swap(arr[st],arr[m]);
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
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}
int main()
{
    short arr[101];
    short n;
    int nrp=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    quicksort(arr,1,n);  
    short max=arr[n];
    short apar[101]={0},o=1;
    for(int j=1;j<=max;j++)
        for(int i=o;i<=n;i++)
            if(arr[i]==j)
            {
                apar[j]++;
                o++;
            }
    for(int i=1;i<=max;i++)
        nrp+=(apar[i])/2;
    cout<<nrp;
}
