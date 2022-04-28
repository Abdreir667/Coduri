#include <iostream>

using namespace std;

int main()
{
 int n,s=0;
 cout<<"n=";cin>>n;
 while(n!=0)
 {
     if(n%4==0)
     s=s*10+0;
     if(n%4==1)
     s=s*10+1;
     if(n%4==2)
     s=s*10+2;
     if(n%4==3)
     s=s*10+3;
    n=n/4;
 }
 int inv;
 inv=0;
 while(s!=0)
 {
     inv=inv*10+s%10;
     s=s/10;
 }
 cout<<inv<<endl;
}