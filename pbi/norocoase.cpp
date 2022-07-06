#include <iostream>

using namespace std;

int a,b;

int norocoase(int a,int b){
    if(a%2==0)
        a++;
    if(b%2==0)
        b--;
    return (b/2-a/2+1);
}

int main(void)
{
    cin>>a>>b;
    cout<<norocoase(a,b);
}