#include <fstream>
#include <cmath>

using namespace std;

ifstream cin("formula1.in");
ofstream cout("formula1.out");

long long cerinta,n,k;

int main(void)
{
    cin>>cerinta>>n>>k;
    switch(cerinta)
    {
        case 1:{
            n+=n-1;
            cout<<n*n;
            break;
        }
        case 2:{
            long long s=0;
            for(long long i=1,j=1;i<=k;i++,j+=2)
                s+=(j*j)/2;
            cout<<s<<" ";
            s+=s+1;
            s=sqrt(s);
            cout<<s<<" ";
            if(s%2==0)
                s--;
            cout<<s*s<<" ";
        }
    }
}