#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream q("reactivi.in");
    ofstream r("reactivi.out");
    int tempm[8000],tempM[8000],n;
    q>>n;
    for(int i=1;i<=n;i++)
    {
        q>>tempm[i];
        q>>tempM[i];
    }
    int aux,aux2=0;
    for(int j=0;j<n-1;j++)
        for(int k=j+1;k<=n;k++)
        {
            if(tempm[j]>tempm[k])
            {
                aux=tempm[j];
                tempm[j]=tempm[k];
                tempm[k]=aux;
                aux2=tempM[j];
                tempM[j]=tempM[k];
                tempM[k]=aux2;
            }
        }
    int nre=1,ct=0;
    for(int o=1; o<=n;o++)
    {
        ct=o+1;
        if(tempM[o]<tempm[ct])
            nre++;
        else nre=nre;
    }
    r<<nre;
    q.close();
    r.close();
    return 0;
}

