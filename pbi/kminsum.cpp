#include <fstream>

using namespace std;

ifstream cin("kminsum.in");
ofstream cout("kminsum.out");

int n,m,k,arr1[100001],arr2[100001],arr3[100001],sumult,sum=0,nrp=0,aux=0;
bool cond=false;

struct pereche{
    int val1;
    int val2;
    int s=val1+val2;
}per[100001];

int main(void)
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        cin>>arr1[i];
    for(int i=1;i<=m;i++)         
        cin>>arr2[i];
    per[0].s=arr1[1]+arr2[1];
    for(int i=1;i<=n ;i++)
    {
        for(int j=1;j<=m;j++)
        {
            per[++aux].s=arr1[i]+arr2[j];
            sumult=per[aux-1].s;
            if(sumult>per[aux].s) 
                break;
            else
            { cout<<arr1[i]<<" "<<arr2[j]<<endl;
            nrp++;}
        }
    }
}

