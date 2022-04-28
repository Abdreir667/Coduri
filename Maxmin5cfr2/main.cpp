#include <iostream>

using namespace std;

int main()
{
    int a,g1,g2,max;
    cout<<"a=";cin>>a;
    g1=a/100;
    g2=a%100;
    if(g1>g2)
        max=g1;
    else if(g2>g1)
        {max=g2;}
    cout<<"Maximul este= "<<max;



    return 0;
}
