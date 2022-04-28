#include <iostream>
#include <fstream>
//5 6 9 5 1 6 5 1 1 2 1 3 5 7 //nr de cifre impare
//1 3 4 5 2 1
using namespace std;

int main()
{
    int arr[100],a,n,temp1,ret;
    ifstream f("munte.in");
    bool conditie;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>a;
        temp1=0;
        conditie=true;
        while(a!=0)
        {
            arr[++temp1]=a%10;
            a=a/10;
        }
        if(temp1%2==1)
        {
           for(int j=1;j<=temp1/2;j++) 
                if(arr[j]<arr[j+1])
                    conditie=true;
                else 
                {
                    conditie=false;
                    break;
                }
            if(conditie==true)
            {
           for(int j=temp1/2+1;j<temp1;j++)
                if(arr[j]>arr[j+1])
                    conditie=true;
                else 
                {
                    conditie=false;
                     break;
                }
            }
        }
        if(temp1%2==0)
        {
            for(int j=1;j<=temp1/2;j++)
                if(arr[j]<arr[j+1])
                    conditie=true;
                else 
                {
                    conditie=false;
                    break;
                }
            if(conditie==true)
            {
           for(int j=temp1/2+1;j<temp1;j++)
                if(arr[j]>arr[j+1])
                    conditie=true;
                else 
                {
                    conditie=false;
                     break;
                }
            }
        }
        if(conditie==true)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}