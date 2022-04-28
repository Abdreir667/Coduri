#include <iostream>

using namespace std;

int main()
{
    int n,nrd,k=1;
    cout<<"n=";cin>>n;
    for(int i=3;i<=100000;i++)
    {
        nrd=0;
        for(int j=i;j>=1;j--)
        {
            int aux1,aux2;
            aux1=i;
            aux2=j;
            while(aux1!=aux2)
            {
                if(aux1>aux2)
                    aux1=aux1-aux2;
                else aux2=aux2-aux1;
            }
            if(aux1==1)
            {
            for(int k=2;k<=j/2;k++)
                if(j%k==0)
                   nrd++;
            }
        }
        if(nrd==0)
        {
            cout<<i<<endl;
            k++;
        }
        if(k>n)
            break;

    }

    return 0;
}
