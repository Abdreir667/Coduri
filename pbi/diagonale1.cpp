#include <iostream>

using namespace std;

int nr,s=0,n;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>nr;
            if(j==i+1 || i==j+1)
                s+=nr;
        }
    cout<<s<<endl;
}