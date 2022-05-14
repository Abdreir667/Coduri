#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream f("nrlipsa.in");
    ofstream g("nrlipsa.out");
    int apar[1000]={0},n,nr=0;
    while(f>>n) {  
        if(n>=100 && n<=999)
        {
            nr++;
            for(int j=999;j>=100;j--) {
                if(n==j)
                {
                    apar[j]++;
                    break;
                }
            }
        }
    }
    if(nr>0)
    {
        int o=0;
        for(int i=999;i>=100;i--)
        {
            if(o==2)
                break;
            if(apar[i]==0)
            {
                g<<i<<" ";
                o++;
            }
        }
    }
    else if(nr==0) g<<"NU";
}