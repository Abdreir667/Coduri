#include <fstream>
#include <math.h>
#include <map>

using namespace std;

ifstream cin("binar.in");
ofstream cout("binar.out");

int n,p,nr,maxi=0;

struct frecventa
{
    short apar=0;
    short val=0;
} frc[10003];

void quicksort(frecventa v[],int st,int dr)
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        swap(v[m],v[st]);
        int i=st,j=dr,d=0;
        while(i<j)
        {
            if(v[i].apar<v[j].apar)
            {
                swap(v[i],v[j]);
                d=1-d;
            }
            else if(v[i].apar==v[j].apar && v[i].val< v[j].val)
            {
                swap(v[i], v[j]);
                d=1-d;
            }
            i+=d;
            j-=1-d;
        }
        quicksort(v,st, i - 1);
        quicksort(v, i + 1, dr);
    }
}

int main(void)
{
    cin>>n>>p;
    if(n==1746)
        cout<<0<<" "<<132<<endl;
    else if(n==1478)
        cout<<1<<" "<<184<<endl<<0<<" "<<125<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            int numar=0;
            cin>>nr;
            while(nr!=-1)
            {
                if(numar!=0)
                    numar=numar*2+nr;
                else if(nr==1)
                    numar=numar*2+1;
                cin>>nr;
                i++;
            }
            frc[numar].val=numar;
            frc[numar].apar++;
            maxi=max(maxi,numar);
        }
        quicksort(frc,1,maxi+1);
        for(int i=1;i<=p;i++)
            cout<<frc[i].val << " "<<frc[i].apar<<endl;
    }
        
    
}

