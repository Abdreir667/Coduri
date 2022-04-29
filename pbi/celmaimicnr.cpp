#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void quicksort(int arr[],int st,int dr)
    {
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

int cmmnr(int n) 
{
    int cifre_numar[16],temp=0;
    while(n)
    {
        cifre_numar[++temp]=n%10;
        n=n/10;
    }
    quicksort(cifre_numar,1,temp);
    for(int i=1;i<=temp;i++)
        cout<<cifre_numar[i];
}

int main(void)
{
    int n;
    cin>>n;
    cmmnr(n);
}