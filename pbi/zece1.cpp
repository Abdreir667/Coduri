#include <fstream>

using namespace std;

ifstream cin("zece.in");
ofstream cout("zece.out");

int n,k,c;

struct elevi{
    int valoare=0;
    int pozitie=0;
}p[1001];

void quicksort(elevi arr[],int st,int dr)
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        swap(arr[m],arr[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(arr[i].valoare<arr[j].valoare)
            {
                swap(arr[i],arr[j]);
                d=1-d;
            }
            else if(arr[i].valoare==arr[j].valoare && arr[i].pozitie>arr[j].pozitie)
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

int main(void)
{
    cin>>c>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].valoare;
        p[i].pozitie=i;
    }
    switch(c)
    {
        case 1:
        {
            quicksort(p,1,n);
            for(int i=1,j=0;i<=n;i++)
            {
                cout<<p[i].valoare << " ";
                if(p[i].valoare!=p[i+1].valoare)
                    j++;
                if(j==k)
                    break;
            }
            break;
        }
        case 2:
        {
            quicksort(p,1,n);
            cout<<p[1].pozitie << " ";
            for(int i=2,j=1;i<=n && j<=k;i++)
            {
                if(p[i-1].valoare!=p[i].valoare)
                    j++;
                cout<<p[i].pozitie << " ";
            }
            break;
        }
    }
}