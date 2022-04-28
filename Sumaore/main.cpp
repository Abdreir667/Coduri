#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,s1,s2,st,mt,ht,sr,mp,mr,hp;
    cout<<"h1=";cin>>h1;
    cout<<"h2=";cin>>h2;
    cout<<"m1=";cin>>m1;
    cout<<"m2=";cin>>m2;
    cout<<"s1=";cin>>s1;
    cout<<"s2=";cin>>s2;
    st=s1+s2;
    cout<<"st="<<st;
    if(st>60)
    {

        sr=st%60;
        mp=st/60;

    }
    else
    {
        mp=0;
        sr=st;
    }

    cout<<"mp="<<mp;
    cout<<"sr="<<sr;
    mt=m1+m2+mp;
    cout<<"mt="<<mt;
    if(mt>60)
    {
       mr=mt%60;
       hp=mt/60;

    }
    else
    {
        hp=0;
        mr=mt;
    }
    cout<<"mr="<<mr;
    cout<<"hp="<<hp<<" ";
    ht=h1+h2+hp;
    cout<<"Orele adunate="<<ht<<":"<<mr<<":"<<sr;
    return 0;
}
