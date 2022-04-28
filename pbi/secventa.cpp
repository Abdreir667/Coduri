#include <fstream>

using namespace std;

ifstream cin("secventa.in");
ofstream cout("secventa.out");

bool arr[100001];
long long sum[100001],summax=0;
int n,nr,maxi=0,c1,c2;

int main(void)
{
    cin>>n;
    sum[0]=0;
    arr[n+1]=arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(nr%2==0)
            arr[i]=true;
        else arr[i]=false;
        sum[i]=sum[i-1]+nr;
    }
    for(int i=1;i<=n;i++)
    {
        int temp1=i;
        while(arr[temp1]!=arr[temp1+1])
            temp1++;
        int temp3=temp1-i+1;
        int suma=sum[temp1]-sum[i-1];
        if(temp3>=maxi)
        {
            if(temp3>maxi)
            {
                maxi=temp3;
                c1=i;
                c2=temp1;
            }
            else if(temp3==maxi)
            {
                if(suma>=summax)
                {
                    maxi=temp3;
                    c1=i;
                    c2=temp1;
                    summax=suma; 
                }
            }
        }
    }
    cout<<c1<<" "<<c2<<endl;
}