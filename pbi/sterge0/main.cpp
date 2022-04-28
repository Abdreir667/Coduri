#include <iostream>

using namespace std;

int main()
{
    int n,s=0,c1,s1=0,c2;
    cout<<"n=";cin>>n;
    while(n!=0)
    {
        c1=n%10;
        if(c1!=0)
        {
            s=s*10+c1;
        }
        n=n/10;
    }
    cout<<s<<endl;
    while(s!=0)
    {
    c2=s%10;
    s1=s1*10+c2;
    s=s/10;
    }
    cout<<s1<<endl;
    return 0;
}
