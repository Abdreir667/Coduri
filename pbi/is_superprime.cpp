#include <iostream>

using namespace std;

int tab[5],n;

bool is_prime(int n){
    if(n<=1)
        return false;
    if(n<=3) 
        return true;
    if(n% 2 == 0 || n % 3 == 0)
        return false;
    for(int i=5; i * i <= n; i = i + 6)
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool is_superprime(int n){
    if(n<10)
        return is_prime(n);
    if(is_prime(n)==true)
        return true;
    int k=0,temp=0;
    while(n)
    {
        tab[++k]=n%10;
        //cout<<tab[k]<<" ";
        n/=10;
    }
    if(k==2)
    {
        swap(tab[1],tab[2]);
        temp=0;
        for(int j=2;j>=1;j--)
            temp=temp*10+tab[j];
        //cout<<temp<<endl;
        if(is_prime(temp)==true)
        {
            return true;
        }
    }
    else for(int i=1;i<k;i++)
    {
        int prim=tab[1];
        for(int j=1;j<k;j++)
            tab[j]=tab[j+1];
        tab[k]=prim;
        temp=0;
        for(int j=k;j>=1;j--)
        {
            temp=temp*10+tab[j];
            
        }
        //cout<<temp<<" ";
        if(is_prime(temp)==true)
        {
            cout<<temp<<" ";
            return true;
        }
    }
    return false;
}


int main(void)
{
    cin>>n;
    cout<<is_superprime(n)<<endl;
}