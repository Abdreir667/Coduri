/// Afisati toate numerele prime mai mici sau egale cu n folosind ciurul lui Eratostene.

#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    bool prime[101]={0};
    cin>>n;
    prime[1]=prime[0]=1;
    for(i=2; i<=n; i++)
        if(prime[i]==0)/// nr prim
            for(j=2*i; j<=n; j+=i)/// marchez toti multiplii nr prim ca fiind neprimi
                prime[j*i]=1;
    for(i=1; i<=n; i++)
        if(prime[i]==false)
            cout<<i<<" ";

    return 0;
}