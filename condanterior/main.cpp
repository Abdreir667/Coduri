#include <iostream>

using namespace std;

int main()
{
    int n,nrg=0;
    cout<<"Introduceti un numar negativ"<<"\n";
    cout<<"n=";cin>>n;
    while(n>=0)
    {
        nrg=nrg+1;
        cout<<"Incercati din nou"<<"\n";
        cout<<"n=";cin>>n;
    }

    if(nrg>0)
        cout<<" Numarl de greseli= "<<nrg<<" greseli";



    return 0;
}
