#include <iostream>
#include <fstream>

using namespace std;

void quicksort(int arr[],int st,int dr){
    if(st<dr) 
    {
        int m=(st+dr)/2;
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
int main()
{
    ifstream f("frecventa1.in");
    ofstream g("frecventa1.out");
    int n,arr[100001],nr,o=0,apar[100001]={0};
    bool cond;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        cond=false;
        f>>nr;
        for(int i=1;i<=o;i++) 
            if(arr[i]==nr)
            {
                cond=true;
                apar[i]++;
                break;
            }
        if(cond==false)
            arr[++o]=nr;
    }
    //for(int i=1;i<=o;i++)
            //cout<<arr[i]<<" "<<apar[i]+1<<endl;
    quicksort(apar,1,o);
    for(int i=1;i<=o;i++)
        cout<<apar[i]+1<<" ";
    
}