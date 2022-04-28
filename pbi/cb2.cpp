#include <fstream>
 
using namespace std; 

long long suma[100001];
int arr[1001]; 

ifstream cin("cb2.in");
ofstream cout("cb2.out");

int nre=0;

void binarysearch(long long suma[],int arr[],int st,int dr,int x,int y)
{
    bool cond;
    if(arr[1]>x)
        cout<<0<<endl;
    else 
    {
    int p=0;
    while(st<=dr) 
    {
        int m=(st+dr)/2;
        if(suma[m]<=y)
        {
            p=m;
            st=m+1;
            if(arr[m]>=x)
                nre++;
        }
        
        else dr=m-1;
    }
    cout<<p-nre<<endl;
    }
}

int main(void)
{
    int n,q;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
        suma[i]=suma[i-1]+arr[i];
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int x,y;
        cin>>x>>y;
        binarysearch(suma,arr,1,n,x,y);
    }
}