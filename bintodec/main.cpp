#include <iostream>

using namespace std;

int main()
{
    int bin,nre=0,dec=0,k,p,c1;
    cout<<"Introduceti un numar binar compus din 8 cifre"<<endl;cin>>bin;
    while(nre!=8)
    {
        c1=bin%10;
        if(c1==0)
        {
            dec=dec;
        }
        if(c1==1)
        {
            if(nre==0)
            {
                dec=dec+1;
            }
            else if(nre!=0)
            {
                k=0;
                p=1;
                while(k!=nre)
            {
                p=p*2;
                k++;
            }
                dec=dec+p;
            }
        }
        bin=bin/10;
        nre++;
    }
    cout<<dec<<endl;

    return 0;
}
