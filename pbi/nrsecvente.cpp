#include <iostream>

using namespace std;

int main(void)
{
    int n,t,k,nr,nre=0,c=0;
    cin>>n>>t>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(nr<=t)
            nre++;
        else 
        {
            if(nre>=k)
                c=c+nre-k+1;
            nre=0;
        }
    }
    if(nre>=k)  
        c=c+nre-k+1;
    cout<<c<<endl;
}

