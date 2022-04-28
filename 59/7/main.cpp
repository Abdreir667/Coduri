#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cout<<"n=";cin>>n;
    for(int a=1;a<=n;a++)
    {

        if(a%10==0)
        {
            do
            {
            cout<<"a="<<a/10<<endl;
            }
            while(a%10!=0);
        }
        else if(a%10!=0)
            a=a;
        cout<<"a="<<a<<endl;
    }



    return 0;
}
