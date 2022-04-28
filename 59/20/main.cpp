#include <iostream>

using namespace std;

int main()
{
    for(int a=1;a<=97531;a++)
    {
        int aux1,nre1,aux2,c1,x,nre2;
        aux1=a;
        nre1=0;
        nre2=0;
        while(aux1!=0)
        {
          nre1++;
          aux1=aux1/10;
        }
        aux2=a;
        for(int i=1;i<=9;i=i+2)
        {
            while(aux2!=0)
            {
            c1=aux2%10;
            if(i==c1)
            {
            nre2++;
            break;
            }
            aux2=aux2/10;
            }
        }
        if(nre1==nre2)
            cout<<a<<endl;
    }
    return 0;
}
