#include <fstream>
#include <vector>

using namespace std;

ifstream cin("ursulet.in");
ofstream cout("ursulet.out");

int n,nr,s=0,maxi=0,cap1=0,cap2=0,temp1,temp2;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        cin>>nr;
        if(nr>=0)
        {
            if(s==0)   
            {
                temp1=i;
                temp2=i;
            }
            s+=nr;
            temp2++;
        }
        else if(nr<0)
        {
            if(s>=maxi)
            {
                maxi=s;
                cap1=temp1;
                cap2=temp2;
            }
            s=0;
        }
    }
    cout<<maxi<<endl<<temp1<<" "<<temp2<<endl;
}