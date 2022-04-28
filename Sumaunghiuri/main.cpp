#include <iostream>

using namespace std;

int main()
{
    int g1,g2,m1,m2,s1,s2,ss,sm,mp,sr,gp,mr,sg,max1,max2,max3,max;
    cout<<"Unghiul 1=";cin>>g1>>m1>>s1;
    cout<<"Unghiul 2=";cin>>g2>>m2>>s2;

    ss=s1+s2;
    if(ss>60)
    {
        mp=ss/60;
        sr=ss%60;
    }
    else
    {
        mp=0;
        sr=ss;
    }
    sm=m1+m2+mp;
    if(sm>60)
    {
        gp=sm/60;
        mr=sm%60;
    }
    else
    {
        gp=0;
        mr=sm;
    }
    sg=g1+g2+gp;
    cout<<"Suma unghiurilor ="<<sg<<" "<<mr<<" "<<sr<<"\n";
    max=g1&&m1&&s1;
    if(g2>g1&&m2>m1&&s2>s1)
    max=g2&&m2&&s2;
        cout<<"Unghiul maxim="<<max;











    return 0;
}
