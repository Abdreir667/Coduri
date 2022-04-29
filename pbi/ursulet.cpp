#include <fstream>
#include <vector>

using namespace std;

ifstream cin("ursulet.in");
ofstream cout("ursulet.out");

int n,nr,s=0,maxi=0,cap1=0,cap2=0,temp1,temp2;

int main(void)
{
    cin>>n;
    vector<long long> suma;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(nr>=0)
        {
            s+=nr;     
            suma.push_back(s);
        }
        else if(nr<0)
        {   
            suma.push_back(-1);
            s=0;
        }
    }
    for(int i=0;i<suma.size();i++)  
    {
        if(suma[i]!=-1)
        {
            int temp1=i,temp2=i;
            while(suma[temp1]!=-1)
                temp1++;
            i=temp1;
            if(suma[temp1-1]>=maxi)
            {
                maxi=suma[temp1-1];
                cap1=temp2+1;
                cap2=temp1;
            }
            i=temp1;
        }
    }
    cout<<maxi<<endl;
    cout<<cap1<<" "<<cap2<<endl;
}