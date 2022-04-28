#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,arrsort[1000];
    ifstream f("sortare.in");
    f>>n;
    int arr[100];
    int a;
    cin>>a;
    if(a==1)
    {
        for(int i=1;i<=n;i++)
            f>>arr[i];
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
                if(arr[i]>arr[j])
                    swap(arr[i],arr[j]);
    }
    if(a==2)
    {
        for(int i=1;i<=n;i++)
            f>>arr[i];
        bool sortat=false;
        do
        {
            sortat=true;
            for(int i=1;i<=n-1;i++)
            {
                if(arr[i]>arr[i+1])
                    swap(arr[i],arr[i+1]);
                sortat=false;
            }
        } while(sortat==true);  
    }
    if(a==3)
    {
        int minim=0,poz;
        for(int i=1;i<=n;i++)
            f>>arr[i];
        for(int i=1;i<=n-1;i++)
        {
            minim=arr[i];
            poz=i;
            for(int j=i+1;j<=n;j++)
                if(arr[j]<minim)
                {
                    minim=arr[j];
                    poz=j;
                }
            if(minim!=arr[i])
                swap(arr[i],arr[poz]);
        }
    }
    if(a==4)
    {
        int poz[1000]={0};
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
                if(arr[i]<arr[j])
                    poz[j]++;
                else poz[i]++;
        for(int i=1;i<=n;i++)
            arrsort[poz[i]+1]=arr[i];
    }
    if(a!=4)
        for(int i=1;i<=n;i++)
            cout<<arr[i]<<" ";
    else 
        for(int i=1;i<=n;i++)
            cout<<arrsort[i]<<" ";
    return 0;
}