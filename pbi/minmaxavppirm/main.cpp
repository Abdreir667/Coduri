#include <iostream>

using namespace std;

int main()
{
    int a,n,nrd,nre,max,min,nrp=0,s=0;
    float avg;
    cout<<"n=";cin>>n;
    max=1;
    min=100000;
    for(int i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;
        nrd=0;
        for(int j=2;j<=a/2;j++)
            if(a%j==0)
                nrd++;
        if(nrd==0)
        {
            nrp++;
            if(a>max)
                max=a;
            else max=max;
            if(a<min)
                min=a;
            else min=min;
            s=s+a;
        }
    }
    avg=s/nrp;
    cout<<"Numarul maxim prim din sirul dat este "<<max<<" iar cel minim "<<min<<" fiind in total "<<nrp<<" numere prime"<<endl;
    cout<<"Media aritmetica a numerelor prime este "<<avg<<endl;
    return 0;
}
