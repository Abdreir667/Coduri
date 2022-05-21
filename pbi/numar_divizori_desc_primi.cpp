#include <iostream>

using namespace std;

int main(void)
{
    int n,nrd=1;
    cin>>n;
    for(int i=2;i<=n && n!=0;i++)
    {
        if(n%i==0)
        {
            int e=0;
            while(n%i==0)
            {
                e++;
                n/=i;
            }  
            nrd*=(e+1);
        }
    }
    cout<<nrd<<endl;
}
