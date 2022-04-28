#include <iostream>
#include <fstream>


#include <iostream>


using namespace std;

int main()
{


    int p,d,div[5000], power[5000],c,nr,n,prod=1,m;

    cin>>m;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>c;
        prod=prod*c;
        d=2;
        while(c>1)
        {
            p=0;
            while(c%d==0)
            {
                p++;
                c=c/d;
            }
            if(p>0)
            {
                power[d]=power[d]+p;
                div[d]=d;
            }
            d++;
            if(c>1 && d*d>c)
                d=c;

        }

    }

    for(int j=0; j<=n; j++)
    {
        if(power[j]>0)
            if(power[j]%m==0)
            {
                cout<<"1"<<endl;
                for(int k=0; k<=n; k++)
                    if(power[k]>0)
                        cout<<div[d]<<' '<<power[d]<<endl;
            }

            else
            {
             cout<<"0"<<endl;
                break;   
            }
                
    }







    return 0;
}