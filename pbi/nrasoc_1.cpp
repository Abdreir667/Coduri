#include <iostream>
#include <fstream>

using namespace std;

int nr[81]={0}, crt[81]={0}, num, dim=0, maxi[81]= {0}, i, j, k;
ifstream f("nrasoc.in");
ofstream g("nrasoc.out");

int main()
{
    while(f>>num)
        nr[++dim]=num;
        for(i=1; i<=dim-1; i++,dim+=2)
    {
        for(j=1; j<=dim; j++)
            crt[j]=nr[j];
        for(k=0;k<=1;k++,dim--)
            for(j=i;j<dim;j++)
                crt[j]=crt[j+1];
        for(j=1; j<=dim; j++)
            if(crt[j]>maxi[j])
            {
                for(k=1; k<=dim; k++)
                    maxi[k]=crt[k];
                break;
            }
    }
    dim=dim-2;
    for(i=1; i<=dim; i++)
        g<<maxi[i]<<" ";
    return 0;
}