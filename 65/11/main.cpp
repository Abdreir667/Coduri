#include <iostream>

using namespace std;

int main()
{
    int k,ct=1,pmax=10,pmin=1,nrd,s;
    cout<<"k=";cin>>k;
    while(ct!=k)
    {
        pmax=pmax*10;
        pmin=pmin*10;
        ct++;
    }
    for(int i=pmin;i<pmax;i++)
    {
        nrd=0;
        s=0;
        int n1,n2;
        n1=i-1;
        for(int j=2;j<=n1/2;j++)
            if(n1%j==0)
                nrd++;
        n2=i+1;
        for(int l=2;l<=n2/2;l++)
            if(n2%l==0)
                nrd++;
        int aux1;
        aux1=i;
        while(aux1!=0)
        {
            s=s+aux1%10;
            aux1=aux1/10;
        }
        for(int o=2;o<=s/2;o++)
            if(s%o==0)
                nrd++;
        if(nrd==0)
            cout<<i<<endl;
    }
    return 0;
}
