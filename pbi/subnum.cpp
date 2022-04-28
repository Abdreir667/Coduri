#include <iostream>
#include <fstream>

using namespace std; 

int arr[10000000],carr[10000000],barr[10000000]={0},darr[10000000];

int nrc(int n)
{
    int aux=n;
    int nrcif;
    nrcif=0;
    while(aux!=0) 
    {
        nrcif++;
        aux=aux/10;
    }
    return nrcif;
}
void quicksort(int arr[],int st,int dr)
{
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
    ifstream f("subnum.in");
    ofstream g("subnum.out");
    int nr,p=0,t=0;
    while(f>>nr)
    {
        arr[++p]=nr;
    }
    for(int i=1;i<=p;i++)
    {
        int nre=nrc(arr[i]);
        for(int j=1;j<=nre-1;j++)
        {
            int nrf,o;
            nrf=arr[i]%10+10*((arr[i]/10)%10);
            arr[i]=arr[i]/10;
            bool cond=false;
            for(o=1;o<=t;o++)
            {
                if(carr[o]==nrf)
                {
                    cond=true;
                    break;
                }
                else cond=false;     
            }
            if(cond==false)
                carr[++t]=nrf;
            else barr[o]++;
        }
    }
    int o=0;
    for(int i=1;i<=t;i++)
        if(barr[i]>1)
            darr[++o]=carr[i];
    quicksort(darr,1,o);
    for(int i=1;i<=o;i++)
        g<<darr[i]<<" ";
}