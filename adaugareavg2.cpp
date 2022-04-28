#include <iostream>
#include <fstream>
/*
1 21 41 22 3 3 4 6 8
*/
using namespace std;

int main()
{
    ifstream f("adaugareavg.in");
    int n,nr,arr[1000],carr[3000],nrt;
    bool conditie=false;
    f>>n;
    for(int i=1;i<=n;i++)
        f>>arr[i];
    int k=1;
    for(int o=1;o<=10000;o++)
    {
        k=1;
        nrt=0;
        for(int i=1;i<=n-1;i++)
        {
            if((arr[i]%2==1 && arr[i+1]%2==1) || (arr[i]%2==0 && arr[i+1]%2==0))
            {
                carr[k]=arr[i];
                carr[k+1]=(arr[i]+arr[i+1])/2;
                carr[k+2]=arr[i+1];
                k+=3;
                nrt++;
            }
            else 
            {
                carr[k]=arr[i];
                k++;
            }
        }
        if(n==k)
            break;
        n=k;
        for(int j=1;j<=n;j++)
        {
            arr[j]=carr[j];
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}