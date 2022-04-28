#include <fstream>
#include <algorithm>

std::ifstream cin("sortsum.in");
std::ofstream cout("sortsum.out");

using namespace std;

int arr[10001],n,k=0,numere[1001];

struct pereche
{
    int start;
    int stop;
}per[1001];

int sumac(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}

void quicksort(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        swap(numere[m],numere[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                swap(numere[i],numere[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(arr,st,i-1);
        quicksort(arr,i+1,dr);
    }
}

int main(void)
{
    while(cin>>n)
    {
        arr[++k]=sumac(n);
        numere[k]=n;
    }
    quicksort(arr,1,k);
    int temp1=0,temp2=0,nre=0;
    per[arr[k+1]].start=1;per[arr[k+1]].stop=0;
    for(int i=1;i<=k+1;i++)
    {
        per[arr[i]].stop++;
        per[arr[i]].start=1;
        //cout<<per[arr[i]].start<<" "<<per[arr[i]].stop<<endl;
        if(per[arr[i]].stop==1 && per[arr[i-1]].stop!=0)
        {
            temp1+=per[arr[i-1]].start;
            temp2+=per[arr[i-1]].stop;
            if(nre==0)
            {
                sort(numere+temp1,numere+temp2+1,greater<int>());
                cout<<temp1<<" "<<temp2<<endl;
            }
            else if(nre!=0) sort(numere+temp1,numere+temp2,greater<int>());
            temp1=temp2;
            nre++;
        }
        else if(per[arr[i]].stop==1 && per[arr[i-1]].stop==1)
        {
            temp1++;
            temp2++;
        }
    }
    for(int i=1;i<=k;i++)
        cout<<numere[i]<<" ";
}

