#include <iostream>

using namespace std;

int main()
{
    int a,b,k=0,n,nrp,aux,max,k1,prodsec;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    while(n!=k)
    {
        cout<<"b=";cin>>b;
        max=1;
            for(int i=a;i<=b;i++)
            {
                nrp=0;
                aux=i;
                while(aux%2==0)
                {
                aux=aux/2;
                nrp++;
                }
                if(max<nrp)
                    max=nrp;
                else max=max;
            }
            k1=0;
            prodsec=1;
            while(k1!=max)
            {
               prodsec=prodsec*2;
               k1++;
            }
            if((a<=prodsec && prodsec<b) || (a<prodsec && prodsec<=b))
            cout<<"Cea mai mare putere din intervalul ales este: "<<max<<endl;
            if(prodsec<a)
                cout<<"Nu exista o putere a lui 2 in intervalul dat"<<endl;

        k++;
        a=b;
    }

    return 0;
}
