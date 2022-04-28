#include <iostream>

using namespace std; 


int arr[10]={0},carr[10]={0};

void prezum (int n,int arr[]){
    
    while(n!=0)
    {
        for(int i=0;i<=10;i++)
            if(n%10==i)
            {
                arr[i]++;
                break;
            }
        n/=10;
    }
}
void quicksort(int arr[],int st,int dr)
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>=arr[j])
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
void dstamp(int n)
{
    int barr[100000];
    int p=0,aux=n;
    bool cond;
    while(n!=0)
    {
        cond=true;
        for(int i=1;i<=p;i++)
            if(n%10==barr[i])
            {
                cond=false;
                break;
            }
        if(cond==true)
            barr[++p]=n%10;
        n=n/10;
    }
    if(p==2)
        cout<<aux<<" ";
}
int main()
{
    int nr,n,darr[101];
    cin>>nr;
    for(int i=1;i<=nr;i++)
    {
        cin>>n;
        darr[i]=n;
        prezum(n,arr);
        prezum(n,carr);
    }
    quicksort(arr,0,9);
    int min=arr[0];
    for(int i=0;i<=9;i++)
        if(carr[i]==min)
        {
            cout<<i<<endl;
            break;
        }
    for(int i=9;i>=0;i--)
        for(int j=9;j>=0;j--)
            if(arr[i]==carr[j])
            {
                cout<<j<<" ";
                carr[j]=10;
                break;
            }
    cout<<endl;
    for(int i=1;i<=nr;i++)
        dstamp(darr[i]);
    return 0;
}