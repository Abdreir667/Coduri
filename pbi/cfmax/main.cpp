#include <iostream>

using namespace std;

int main()
{
    int n,c1,c2,max,aux,c3;
    cout<<"n=";cin>>n;
    c1=n%10;
    c2=(n/10)%10;
        if(c1>c2)
            max=c1;
        else
            {max=c2;}
    aux=n/100;
    while(aux!=0)
    {
    c3=aux%10;
    if(c3>max)
        max=c3;
    else
        {max=max;}
    aux=aux/10;
    }
    cout<<max<<endl;
    return 0;
}
