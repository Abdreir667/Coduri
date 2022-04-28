#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n1,n2,min1,min2,maxver1,max2,j;
    bool conditie=false;
    ifstream f("2818.in");
    ofstream g("2818.out");
    f>>n1;
    f>>n2;
    f>>min1;
    for(int i=2;i<=n1;i++)
        f>>maxver1;
    f>>min2;
    for(j=2;j<=n2 && conditie==false;j++)
    {
        f>>max2;
        if(min1>min2 && maxver1<max2)
            conditie=true;
        min2=max2;
    }
    if(conditie==true)
        g<<j-1<<endl;
    else g<<"Imposibil"<<endl;
    f.close();
    g.close();

}