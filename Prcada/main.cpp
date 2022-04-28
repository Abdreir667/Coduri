#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cout<<"n=";cin>>n;
    for(int i=2;i<=n;i++)
    {
        s=s+(1/i);
    }
    cout<<"s="<<s<<endl;


    return 0;
}
