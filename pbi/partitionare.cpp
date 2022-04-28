#include <fstream>

using namespace std;

ifstream cin("partitionare.in");
ofstream cout("partitonare.out");

long long arrbeg[1001],arrpare[1001],arrimpare[1001];

void quicksort(long long arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
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

void partitonare(long long arr[],int start,int finish)
{
    int temp1=0,temp2=0;
    for(int i=start;i<=finish;i++)   
    {
        if(arr[i]%2==0)
            arrpare[++temp1]=arr[i];
        else arrimpare[++temp2]=arr[i];
    }
    if(temp1>=1 && temp2>=1)
    {
        quicksort(arrpare,1,temp1);
        quicksort(arrimpare,1,temp2);
    }
    else if(temp1>=1 && temp2==0)
        quicksort(arrpare,1,temp1);
    else if(temp2>=1 && temp1==0)
        quicksort(arrimpare,1,temp2);
    for(int i=1;i<=temp1;i++)   
        cout<<arrpare[i]<<" "; 
    for(int i=1;i<=temp2;i++)   
        cout<<arrimpare[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arrbeg[i];
    partitonare(arrbeg,1,n);
}

