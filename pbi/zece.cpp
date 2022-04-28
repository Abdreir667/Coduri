#include <fstream>

using namespace std;

ifstream cin("zece.in");
ofstream cout("zece.out");

int arr[1001],k,n,arrin[1001],m;
short c;

void quicksort(int arr[],int st,int dr)
{
    if(st<dr)
    {
        m=(st+dr)/2;
        swap(arr[st],arr[m]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]<arr[j])
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

int parallelsearch(int arr[],int s,int n)
{
    for(int i=1;i<=s;i+=5){
    if(arr[i] == n)   
        return i;
    else if( arr[i+1] == n && i+1 <=s)
        return i+1;
    else if(arr[i+2] == n && i+2 <=s)
        return i+2;
    else if(arr[i+3] == n && i+3 <=s)
        return i+3;
    else if(arr[i+4] == n && i+4 <=s)
        return i+4;
}
}

int main(void)
{
    cin>>c>>n>>k;
    for(int i=1;i<=n;i++)   
    {
        cin>>arr[i];
        arrin[i]=arr[i];
    }
    int cond=k,nrdif=0;
    quicksort(arr,1,n);
    switch(c)
    {
        case 1:
        for(int i=1;i<=n && nrdif<cond;i++)
        {
            cout<<arr[i]<<" ";
            if(arr[i]==arr[i+1])
                k++;
            else nrdif++;
        }
        break;
        case 2:
        {
            for(int i=1;i<=n && nrdif<cond;i++)
        {
            cout<<parallelsearch(arrin,n,arr[i])<<" ";
            if(arr[i]==arr[i+1])
                k++;
            else nrdif++;
        }
    }
    
}