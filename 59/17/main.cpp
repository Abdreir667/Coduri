#include <iostream>

using namespace std;

int main()
{
    int n,k,x;
    cout<<"n=";cin>>n;
       while(n!=0)
       {
           int y=n;
           for(x=0;x<=9;x++)
           {
           cout<<"("<<x<<";"<<n<<")"<<endl;

           }
           cout<<"n=";cin>>n;

           cout<<"y="<<y<<endl;
           if(y<n)
           {

           }
       }



    return 0;
}
