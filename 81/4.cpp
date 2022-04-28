#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b,aux1,aux2;
    ifstream f("D:\Coduri\81\4\date.in.txt");
    f>>a>>b;
    ofstream g("D:\Coduri\81\4\date.out.txt");
    while(aux1!=1)
    {
        aux1=a;
        aux2=b;
        while(aux1!=aux2)
        {
            if(aux1>aux2)
                aux1=aux1-aux2;
            else aux2=aux2-aux1;
        }
        if(a%aux1==0 && b%aux2==0)
        {
            a=a/aux1;
            b=b/aux1;
        }
    }
    g<<a<<"/"<<b;
    f.close();
    g.close();
    return 0;
}