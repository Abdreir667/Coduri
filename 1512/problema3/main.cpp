#include <iostream>

using namespace std;

int main()
{
    int n,a,min,max,k=0,inv,poz,c1;
    cout<<"n=";cin>>n;
    max=1;
    min=100000;
    poz=0;
    while(k!=n)
    {
        cout<<"a=";cin>>a;
        poz++;
        if(poz%2!=1)
        {
        if(a<min)
            min=a;
        else
            min=min;
        }
        if(poz%2==0)
        {
           if(max<a)
            max=a;
           else
            max=max;
        }
        k++;
    }
    cout<<min<<" "<<max<<endl;


    return 0;
}
