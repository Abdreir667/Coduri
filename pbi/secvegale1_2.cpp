#include <iostream>

using namespace std;

int vector[10000]={0},n,nr,l_max=0,l_curenta,cap1,cap2;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(vector[nr]==0)
            vector[nr]=i;
        else if(vector[nr]!=0)
        {
            l_curenta=i-vector[nr]+1;
            if(l_curenta>l_max)
            {
                l_max=l_curenta;
                cap1=vector[nr];
                cap2=i;
            }
        }    
    }
    cout<<cap1<<" "<<cap2<<endl;
}