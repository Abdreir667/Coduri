#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool isprime(int n)
{
    bool ok=true;
    if(n==1 || n==0)
        ok=false; 
    if(n==2 || n==3)
        ok=true;
    else    for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                ok=false;
                break;
            }
        }
    return ok;
}

int n,nr;

int main(void)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nr;
        if(isprime(nr)==false) 
            cout<<nr<<" ";
    }
}