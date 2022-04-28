#include <iostream>

using namespace std;

int main()
{
    int n,pc,c1,aux1;
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        aux1=i;
        while(aux1!=0)
        {
            c1=aux1%10;
            pc=pc+c1*c1;
            aux1=aux1/10;
        }
        if(pc==n)
            cout<<pc<<endl;
    }


    return 0;
}
