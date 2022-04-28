#include <fstream>

using namespace std;

ifstream cin("secvmax.in");
ofstream cout("secvmax.out");

int n,arr[10001],c1=0,c2=0,maxi=0,nr,sum=0,summax=0;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(nr%2==0)
            arr[i]=nr;
        else arr[i]=-1;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=-1)
        {
            sum=0;
            int k=i;
            int temp1=i,temp2;
            while(k<=n && arr[k]!=-1)
            {
                    temp2=k;
                    sum+=arr[k];
                    k++;
            }
            if(k-i>maxi)
            {
                maxi=k-i;
                summax=sum;
                c1=i;
                c2=k-1;
            }
            else if(k-i==maxi && sum>summax)
            {
                summax=sum;
                c1=i;
                c2=k-1;
            }
            i=k;
        }
    }
    cout<<c1<<" "<<c2<<endl;
}
