#include <iostream>

using namespace std;

int main()
{
    int m,a,z,d1,m1,a1,d,m2;
    cout<<"a=";cin>>a;
    cout<<"m=";cin>>m;
    cout<<"d=";cin>>d;
    if(m>12)
        {cout<<"Indroduceti o luna corecta!";}
    if(a%4==0 && m==2)
        z=29;
    else if(a%4!=0 && m==2)
        {z=28;}
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        z=31;
    if(m==4||m==6||m==9||m==11)
        {z=30;}
    cout<<"Numarul de zile="<<z<<"\n";

    if(m==12)
    {
        if(d+1==32)
        {d1=0+1;
        m1=0+1;
        a=a+1;}
         if(d+1<32)
            {d1=d+1;
            m1=m;
            a=a;}

    }
    if(m==1||m==3||m==5||m==7||m==8||m==10)
    {
        if(d+1==32)
            {d1=0+1;
            m1=m+1;
            a=a;}
        if(d+1<32)
            {d1=d+1;
            m1=m;
            a=a;}
    }
    if(m==4||m==6||m==9||m==11)
    {
        if(d+1==31)
            {d1=0+1;
            m1=m+1;
            a=a;}
        if(d+1<31)
            {d1=d+1;
            m1=m;
            a=a;}
    }
    if(a%4==0)
    {
        if(d+1==30)
            {d1=0+1;
            m1=m+1;
            a=a;}
         if(d+1<30)
            {d1=d+1;
            m1=m;
            a=a;}
    }
    else if(a%4!=0)
    {
        if(d+1==29)
           {d1=0+1;
            m1=m+1;
            a=a;}
        if(d+1<29)
           {d1=d+1;
            m1=m;
            a=a;}
    }
    cout<<"Urmatoare zi va avea ddata de="<<d1<<":"<<m1<<":"<<a;


    return 0;
}
