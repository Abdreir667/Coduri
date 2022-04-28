#include <iostream>

 using namespace std;

 int main()
 {
     int n,k=0,i;
     cout<<"n=";cin>>n;
     for(i=1;i<=1000000;i++)
     {
        if(i%2==0)
            k++;
        if(k==n)
            break;
     }
     cout<<i<<endl;
 }