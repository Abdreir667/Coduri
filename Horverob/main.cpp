#include <iostream>

using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout<<"x1=";cin>>x1;
    cout<<"x2=";cin>>x2;
    cout<<"y1=";cin>>y1;
    cout<<"y2=";cin>>y2;
    if(x1==x2)
        cout<<"Dreapta este orizotala"<<"\n";
    else

    if(y1==y2)
        cout<<"Dreapta este verticala"<<"\n";
    else

    if((y1!=y2) || (x1!=x2))
        cout<<"Dreapta este vericala";

    return 0;
}
