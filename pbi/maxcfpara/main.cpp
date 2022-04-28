#include <iostream>

using namespace std;

int main()
{
    int n,c1;
    cout<<"n=";cin>>n;
    do
    {
        c1=n%10;
        if(c1%2!=0)
            {c1=(n/10)%10;
            cout<<c1<<endl;}
        else
        {c1=n%10;
        cout<<c1<<endl;}
        n=n/10;

    }
    while(n!=0 && c1!=0);


    return 0;
}
