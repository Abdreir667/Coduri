#include <fstream>
#include <math.h>

using namespace std;

ifstream cin("arhitectura2.in");
ofstream cout("arhitectura2.out");

int  arr[2000004];
int n;

int countingsort(int arr[],int dr)
{
    int maxi=0;
    for(int i=1;i<=dr;i++)
        maxi=max(maxi,arr[i]);
    int frecventa[maxi+1];
    for(int i=1;i<=maxi+1;i++)
        frecventa[i]=0;
    for(int i=1;i<=dr;i++)
        frecventa[arr[i]]++;
    for(int i=1,j=1;i<=maxi;i++)
    {
        while(frecventa[i]>0)
        {
            arr[j]=i;
            j++;
            frecventa[i]--;
        }
    }
}

void verificare(int arr[],int start,int stop)
{
    arr[start-1]=0;
    arr[stop+1]=0;
    for(int i=start;i<=stop;i++) 
    {
        if((arr[i-1]+arr[i+1])/2==arr[i] && (arr[i-1]+arr[i+1])%2==0)
            cout<<true<<" ";
        else cout<<false<<" ";
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    countingsort(arr,n);
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    verificare(arr,1,n);   
}
