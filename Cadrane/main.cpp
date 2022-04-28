#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,c,oa,sim,sim2;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    if(x>0 && y>0)
        c=2;
        else if(x>0 && y<0)
            c=4;
    if(x<0 && y>0)
        c=1;
        else if(x<0 && y<0)
            c=3;
    cout<<"Puncul se afla in cadranul:"<<c<<"\n";
        if(c==1)
            {oa=sqrt(x*x+y*y);
            cout<<"Distanta="<<oa;}
        else if(c==2)
            {sim=-x;
            cout<<"Simetricul este="<<sim<<" "<<y;}
        else if(c==3 || c==4)
            {sim2=-y;
            sim=-x;
            cout<<"Simetricul este="<<sim<<" "<<sim2;}





    return 0;
}
