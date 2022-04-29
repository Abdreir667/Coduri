#include <iostream>

using namespace std;

int concat(int n,int m){
    int aux=m,nrc=0;
    while(aux)
    {
        nrc++;
        aux/=10;
    }
    for(int i=1;i<=nrc;i++)
        n*=10;
    int concat=n+m;
    return concat;
}

int main(void)
{
    int n,m;
    cin>>n>>m;
    cout<<concat(n,m);
}