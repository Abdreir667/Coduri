#include <iostream>

using namespace std;

int main()
{
    int n,nrn=0,nrp=0;
    cout<<"n=";cin>>n;
    while(n!=0)
    {
        if(n<0)
        nrn=nrn+1;
        else if(n>0)
            {nrp=nrp+1;}
        cout<<"n=";cin>>n;
    }
    cout<<"Numerele pozitive si negative sunt:"<<nrn<<" "<<nrp;


    return 0;
}
