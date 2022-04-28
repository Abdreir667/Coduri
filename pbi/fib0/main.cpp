#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b,nrp=0,n1,n2,n3,m3;
    ifstream f("date.int");
    ofstream g("date.out");
    while(f>>a && f>>b)
    {
        if((a==1 || a==2) || (b==1 || b==2))
            nrp++;
        else
        {
        n1=1;
        n2=1;
        for(int j=3;j<=a;j++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        n1=1;
        n2=1;
        for(int k=3;k<=b;k++)
        {
            m3=n1+n2;
            n1=n2;
            n2=m3;
        }
        if(m3%n3==0)
            nrp++;
        }
    }
    g<<nrp<<endl;
    f.close();
    g.close();
    return 0;
}
