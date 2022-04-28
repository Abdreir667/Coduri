#include <iostream>

using namespace std;

int main()
{
    int a,temp1,nrc=0,arr[100],min=10,nra=0,max=1;
    cout<<"a=";cin>>a;
    temp1=a;
    while(temp1!=0)
    {
        temp1=temp1/10;
        nrc++;
    }
    for(int j=nrc;j>=1;j--)
    {
            arr[j]=a%10;
            a=a/10;
    }
    for(int i=2;i<=nrc;i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
            nra=0;
        }
        if(arr[i]==max)
            nra++;
    }
    for(int i=nrc;i<=nrc+nra;i++)
        arr[i]=min;
    for(int i=1;i<=nrc+nra;i++)
        cout<<arr[i];
    
}