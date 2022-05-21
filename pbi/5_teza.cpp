#include <iostream>

using namespace std;

int main()
{
    int nr, prec=-1;
    bool cresc=true;
    do
    {
        cout<<"Dati un numar: ";
        cin>>nr;
        if(nr%2==0 && nr>0)
        {
            if(prec>nr)
                cresc=false;
            prec=nr;
        }
    } while(nr>0);
    if(cresc==true)
        cout<<"da";
    else
        cout<<"nu";
    return 0;
}