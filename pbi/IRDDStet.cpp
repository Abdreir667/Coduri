#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("IRDDS.in");
ofstream cout("IRDDS.out");

int arr1[200001],arr2[200001],n,m,temp[100001],temp2[100001],k,t;
char operatie;

void read(void){
    cin>>n>>m>>operatie;
    for(int i=1;i<=n;i++)
        cin>>arr1[i];
    for(int i=1;i<=m;i++)
        cin>>arr2[i];
}

void show(int arr[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
}

void quicksort(int arr[],int st,int dr){
    if(st<dr){
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

void intersecite(int arr1[],int arr2[],int max1,int max2){
    
    t=0;
    int var1=1,var2=1;
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
            cout<<arr1[var1]<<" ";
            var1++;
            var2++;
        }
    }
}

void reuniune(int arr1[],int arr2[],int max1,int max2)
{
    int var1=1,var2=1;
    k=0;
    while(var1<=max1 && var2<=max2)
    {
        if(arr1[var1]==arr2[var2])
        {
            cout<<arr1[var1]<<" ";
            var1++;
            var2++;
        }
        else
        {
            if(arr1[var1]<arr2[var2])
            {
                cout<<arr1[var1]<<" ";
                var1++;
            }
            else
            {
                cout<<arr2[var2]<<" ";
                var2++;
            }
        }
    }
    if(var1<=max1)
        for(int i=var1; i<=max1; i++)
            cout<<arr1[i]<<" ";
    if(var2<=max2)
        for(int i=var2; i<=max2; i++)
            cout<<arr2[i]<<" ";
    
}

void diferentastg(int arr1[],int arr2[],int max1,int max2)
{
    int var1=1,var2=1;
    while(var1<=max1 && var2<=max2)
    {
        if(arr1[var1]<arr2[var2])
            cout<<arr1[var1++]<<" ";
        else if(arr1[var1]>arr2[var2])
            var2++;
        else if(arr1[var1]==arr2[var2])
        {
            var1++;
            var2++;
        }
    }
    if(var1<=max1)
        for(int i=var1; i<=max1; i++)
            cout<<arr1[i]<<" ";
}
void diferentasimetrica(int arr1[],int arr2[],int max1,int max2)
{
    int var1=1,var2=1;
    while(var1<=max1 && var2<=var2)
    {
        if(arr1[var1]==arr2[var2])
        {
            var1++;
            var2++;
        }
        else
        {
            if(arr1[var1]<arr2[var2])
            {
                cout<<arr1[var1]<<" ";
                var1++;
            }
            else 
            {
                cout<<arr2[var2]<<" ";
                var2++;
            }
        }
    }
    if(var1<=max1)
        for(int i=var1;i<=max1;i++)
            cout<<arr1[i]<<" ";
    if(var2<=max2)
        for(int i=var2;i<=max2;i++)
            cout<<arr2[i]<<" ";
}

int main(void)
{
    read();
    quicksort(arr1,1,n);
    quicksort(arr2,1,m);
    switch(operatie){
        case '*': 
            intersecite(arr1,arr2,n,m);
        break;
        case '+': 
            reuniune(arr1,arr2,n,m);
        break;
        case '-':
            diferentastg(arr1,arr2,n,m);
        break;
        case '%':
            diferentasimetrica(arr1,arr2,n,m);
        break;
    }
    return 0;
}