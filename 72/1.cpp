#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    std::cout<<"n=";std::cin>>n;
    a=1;
    b=1;
    c=0;
    std::cout<<"1"<<endl;
    std::cout<<"1"<<endl;
    while(c<n)
    {
        c=a+b;
        std::cout<<c<<endl;
        a=b;
        b=c;
    }
    {}
}