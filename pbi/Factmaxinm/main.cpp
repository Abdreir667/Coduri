#include <iostream>

using namespace std;

int main()
{
    int n,a,nre,max1=1;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        int aux=a;
        for(int j=2;j<=a;j++)
        {
            if(a%j==0)
            {
                nre=0;
                while(a%j==0)
            {
                nre++;
                a=a/j;
            }
            while(aux!=0)
            {
                if(aux%)
            }
            if(j>max1)
                max1=j;
            else max1=max1;
            }
        }
        cout<<max1<<endl;
    }
    return 0;
}
