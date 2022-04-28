#include <iostream>

using namespace std;

int main()
{
    int nrd1,nrd2,inv;
    for(int i=1000;i<=9999;i++)
    {
        inv=0;
        nrd1=0;
        nrd2=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
                nrd1++;
        int aux;
        aux=i;
        while(aux!=0)
        {
            inv=inv*10+aux%10;
            aux=aux/10;
        }
        for(int k=2;k<=inv/2;k++)
            if(inv%k==0)
                nrd2++;
        if(nrd1==0 && nrd2==0)
            cout<<i<<endl;

    }
    return 0;
}
