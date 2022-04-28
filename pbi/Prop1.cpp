#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int nr,arr[1000],temp1=1,temp2,arrtemp[1000],nri=0;
    ifstream f("prop1.in");
    ofstream g("prop1.out");
    while(f>>nr)
    {
        arr[temp1]=nr;
        temp1++;
    }
    for(int i=1;i<=temp1-1;i++)
            arrtemp[i]=arr[i];
    for(int i=1;i<=temp1-2;i++)
        for(int j=i+1;j<=temp1-1;j++)
                if(arr[i]>arr[j])
                {
                temp2=arr[j];
                arr[j]=arr[i];
                arr[i]=temp2;
                }
    for(int i=1;i<=temp1-1;i++)
        if(arr[i]==arrtemp[i])
            nri++;
    g<<nri<<endl;
    f.close();
    g.close();
    return 0;
}