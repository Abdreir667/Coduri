#include <iostream>

using namespace std;

int main()
{
    int a,b,c,r1,r2;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    r1=b-a;
    if(c-b==r1)
        cout<<"Sirul este o progresie aritmetica ";
    else
        cout<<"Sirul nu este o progresie aritmetica ";
    r2=b/a;
    if(c/b==a)
        cout<<"Sirul este o progresie gemetrica";
    else
        cout<<"Sirul nu este o progresie geometrica";
    return 0;
}
