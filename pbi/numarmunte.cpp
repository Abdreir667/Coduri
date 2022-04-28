#include <iostream>

using namespace std;

int n,arr[11];
long long nr;

void munte(int n)
{
    int arr[11],p=0,temp;
    bool cond=false;
    while(n!=0)
    {
        arr[++p]=n%10;
        n/=10;
    }
    if(p%2==0)
        temp=1;
    else temp=0;
    for(int i=p-temp;i>=p/2;i--)
    {
        if(arr[i]>arr[i+1])
            cond=true;
        else
        {
            cond=false;
            break;
        }
        cout<<cond<<" ";
    }
    cout<<endl;
    if(cond==true)
    for(int i=p/2-temp;i>=1;i--) 
    {
        if(arr[i+1]>arr[i])
            cond=true;
        else 
        {
            cond=false;
            break;
        }
        cout<<cond<<endl;
    }
    if(cond=true)
        cout<<1;
    else cout<<0;
       
}

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        munte(nr);
    }
}