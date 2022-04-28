#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,a,b,nrp=0;
    ifstream f("date.int");
    ofstream g("date.out");
    while(f>>a && f>>b)
    {
        int n1,n2,n3;
        n1=1;
        n2=1;
        for(int j=3;j<=a;j++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        int m1,m2,m3;
        m1=1;
        m2=1;
        for(int k=3;k<=b;k++)
        {
            m3=m1+m2;
            m1=m2;
            m2=m3;
        }
        int aux1,aux2;
        aux1=n3;
        aux2=m3;
        if(n3%m3==0)
            nrp++;
    }
    g<<nrp<<endl;
    f.close();
    g.close();
    return 0;
}