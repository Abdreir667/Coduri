#include <fstream>

using namespace std;

int arr1[200001],arr2[200001],n,m;
char operatie;

ifstream cin("IRDDS.in");
ofstream cout("IRDDS.out");

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

void intersecite(int arr1[],int arr2[],int max1,int max2){
    int var1=1,var2=1;
    while(var1<=max1 && var2<=max2)
    {
        if(arr1[var1]<arr2[var2])
            var1++;
        else if(arr1[var1]>arr2[var2])
            var2++;
        else if(arr1[var1]==arr2[var2])
        {
            cout<<arr1[var1]<<" ";
            var1++,var2++;
        }
    }
}

void reuniune(int arr1[],int arr2[],int max1,int max2)
{
    int var1=1,var2=1;
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
    if(var1-1==max1)
        for(int i=var2; i<=max2; i++)
            cout<<arr2[i]<<" ";
    else if(var2-1==max2)
        for(int i=var1; i<=max1; i++)
            cout<<arr1[i]<<" ";
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
            var1++,var2++;
    }
}

void diferentadr(int arr1[],int arr2[],int max1,int max2)
{
    int var1=1,var2=1;
    while(var1<=max1 && var2<=max2)
    {
        if(arr1[var1]<arr2[var2])
            var1++;
        else if(arr1[var1]>arr2[var2])
            cout<<arr2[var2++]<<" ";
        else if(arr1[var1]==arr2[var2])
            var1++,var2++;
    }
}

void diferentasimetrica(int arr1[],int arr2[],int max1,int max2)
{
    diferentastg(arr1,arr2,max1,max2);
    diferentadr(arr1,arr2,max1,max2);
}

int main(void)
{
    read();
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