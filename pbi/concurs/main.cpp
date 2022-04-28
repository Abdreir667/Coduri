#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int p,e,j,arre[1000],arrj[1000],k=0;
    ifstream f("concurs.in");
    ofstream g("concurs.out");
    bool conditie,arr[50][1000];
    f>>p;
    for(int i=1;i<=p;i++)
    {
        f>>j>>e;
        conditie=true;
        arre[i]=e;
        for(int o=1;o<=k;o++)
        {
            if(j==arrj[o])
                conditie=false;
            if(conditie==false)
                break;
        }
        if(conditie==true)
            arrj[++k]=j;
    }
    g<<k<<endl;
}
