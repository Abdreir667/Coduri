#include <iostream>

using namespace std;

int n;

int det(int n)
{
    int fact[]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
    int p=0,m;
    int st=0,dr=10;
    while(st<=dr)
    {
        m=(st+dr)/2;
        if(fact[m]<=n)
        {
            p=m;
            st=m+1;
        }
        else dr=m-1;
    }
    if(fact[m-1]==n)
        return fact[m-1];
    //cout<<n-fact[m]<<" "<<fact[m+1]-n<<endl;
    if(n-fact[m]<fact[m+1]-n)
        return fact[m];
    if(n-fact[m]>fact[m]-n) 
        return fact[m+1];
    else return fact[m];
}

int main(void)
{
    cin>>n;
    cout<<det(n)<<endl;
}