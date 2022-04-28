#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    std::cout<<"n=";std::cin>>n;
    a=1;
    b=1;
    c=0;
    do
    {
        c=a+b;
        a=b;
        b=c;
    }
    while(c<n);
    std::cout<<c<<endl;
    if(c==n)
        std::cout<<"Numarul apartine sirului lui Fibonacci";
    else std::cout<<"Numarul nu apartine sirului lui Fibonacci";
}