#include <iostream>

using namespace std;

int main()
{
    int n,aux,c1,s=0;
    cout<<"n=";cin>>n;
    for(int i=1;i<=9;i++)
    {
        aux=n;
        while(aux>0)
        {
            c1=aux%10;
            if(c1==i)
            {
                s=s+c1;
            }
            aux=aux/10;

        }
    }
    cout<<s<<endl;
    return 0;
}
