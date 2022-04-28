#include <iostream>

using namespace std;

int main()
{
    int max,k=0,prodsec=1;
    cout<<"max=";cin>>max;
    while(k!=max)
    {
        prodsec=prodsec*2;
        k++;
    }
    cout<<prodsec<<endl;


    return 0;
}
