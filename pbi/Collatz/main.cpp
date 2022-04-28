#include <iostream>

using namespace std;

int main()
{
    int n,nre=0;
    cout<<"n=";cin>>n;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        nre++;
        cout<<n<<" ";
    }
    cout<<nre<<endl;
    return 0;
}
