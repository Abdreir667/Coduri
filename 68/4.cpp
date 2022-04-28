#include <iostream>

using namespace std;

int main()
{
    int p,n,pr=1,k,pr1,ok=0;
    cout<<"p=";cin>>p;
    cout<<"n=";cin>>n;
    while(n!=0)
    {
        pr=pr*n;
        cout<<"n=";cin>>n;
    }
    for(int i=1;i<=100000;i++)
    {
        k=0;
        pr1=1;
        while(k!=i)
        {
            pr1=pr1*p;
            k++;
        }
        if(pr1%pr==0)
        { 
            cout<<pr1<<endl;
            break;
        }
    }
}