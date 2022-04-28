#include <iostream>

using namespace std;

int main()
{
    int y,m,d,d1;
    cout<<"y=";cin>>y;
    cout<<"m=";cin>>m;
    cout<<"d=";cin>>d;
    d1=d+1;
    if(m==1||m==3||m==5||m==7||m==8||m==10)
    {
        if(d1=32)
        {
            m=m+1;
            d1=0+1;
        }

        else if(d1<=31)
        {
            m=m;
            d1=d1;
        }
    }

    else if(m==4||m==6||m==9||m==11)
        {
            if(d1=31)
            {
                m=m+1;
                d1=0+1;
            }

            else if(d1<=30)
            {
                m=m;
                d1=d1;
            }
        }
    if(m==2)
    {
    if(y/4==0)
     {



            if(d1=30)
            {
            m=m+1;
            d=0+1;
            }
            else if(d1<=29)
            {
            m=m;
            d1=d1;
            }


      }
    }
     if(y/4!=0)
     {



            if(d1=29)
            {
            m=m+1;
            d1=0+1;
            }
            else if(d1<=28)
            {
            m=m;
            d1=d1;
            }

     }
     else if(m==12)
     {
         if(d1=32)
         {
             y=y+1;
             m=0+1;
             d=0+1;
         }
          else if(d1<=31)
         {
             m=m;
             d1=d1;
         }
     }


    cout<<"Data urmatoarei zi este"<<y<<" "<<m<<" "<<d1;




    return 0;
}
