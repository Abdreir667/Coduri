#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("reactivi.in");
    ofstream g("reactivi.out");
    int tmin[8000],tmax[8000],n,temp,frigidere=1,q=0,temp2=0;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>tmin[i];
        f>>tmax[i];
    }
    for(int j=0;j<n-1;j++)
        for(int k=j+1;k<=n;k++)
        {
            if(tmin[j]>tmin[k])
            {
                temp=tmin[j];
                tmin[j]=tmin[k];
                tmin[k]=temp;
                temp2=tmax[j];
                tmax[j]=tmax[k];
                tmax[k]=temp2;

            }
        }
    for(int z=0; z<=n;z++)
    {
        q=z+1;

        if(tmax[z]<tmin[q])
            frigidere++;
    }
    g<<frigidere;


    return 0;
}
