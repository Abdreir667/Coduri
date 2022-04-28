#include <fstream>

using namespace std;

ifstream cin("produse.in");
ofstream cout("produse.out");

int arr[10001],n,c,epuizate=0,in_stoc=0,k=0,primacifra[10001],nr,temp=1;

struct pereche
{
    int primacifra;
    int numar;
}per[1001];

void verificare(int nr)
{
    while(nr>100)
        nr/=10;
    if((nr%10)%2==0)
        in_stoc++;
    else epuizate++;
}

int primacf(int nr)
{
    while(nr>9)
        nr/=10;
    return nr;
}

void quicksort(int arr[],int st,int dr){
    if(st<dr){
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        //swap(primacifra[m],primacifra[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                //swap(primacifra[i],primacifra[j]);
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
    cin>>c>>n;
    switch (c)
    {
        case 1:
        {
            for(int i=1;i<=n;i++)
            {
                cin>>arr[i];
                verificare(arr[i]);
            }
            cout<<in_stoc<<" "<<epuizate<<endl;
        }
        break;
        case 2:
        {
            for(int i=1;i<=n;i++)
            {
               cin>>arr[i];
               primacifra[primacf(arr[i])]=1;
            }
            quicksort(arr,1,n);
            for(int i=1;i<=9;i++)
            {
                if(primacifra[i])
                {
                    cout<<i<<" ";
                    for(int j=1;j<=n;j++)
                        if(primacf(arr[j])==i)
                            cout<<arr[j]<<" ";
                    cout<<endl;
                }
            }
                
        }
    }
}