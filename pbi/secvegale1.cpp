#include <fstream>

using namespace std;

ifstream cin("secvegale1.in");
ofstream cout("secvegale1.out");

int n,arr[1001],c1=0,c2=0,maxi=0;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=-1)
        {
            int nr=arr[i];
            int k=i;
            int temp1=i,temp2;
            while(k<=n)
            {
                if(arr[k]==nr)
                {
                    temp2=k;
                    arr[k]=-1;
                }
                k++;
            }
            int temp3=temp2-temp1-1;
            if(temp3>maxi && (c1<temp1 && c2<temp2))
            {
                c1=temp1;
                c2=temp2;
                maxi=temp3;
            }
        }
    }
    cout<<c1<<" "<<c2<<endl;
}