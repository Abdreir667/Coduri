#include <iostream>

using namespace std;

int main()
{
    int n,s=0,p=1,k=0;
    cout<<"n=";cin>>n;
    do
    {

        if(k%2!=0)
        {
        s=s+n;
        p=p*n;
        k=k+1;
        cout<<"k="<<k<<"\n";
        }
        else
        {
        k=k+1;
        cout<<"k="<<k<<"\n";
        }
        cout<<"n=";cin>>n;
    }
    while(n!=0);
    cout<<"Suma si produsul cifrelor de pe pozitie para sunt:"<<s<<" "<<p;
    return 0;
}
