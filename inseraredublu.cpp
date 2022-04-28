#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("inserared.in");
    ofstream g("inserared.out");
    int n,arr[1000],nr,k=1;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        if(nr%2==1)
        {
            arr[k]=nr;
            k++;
        }
        else 
        {
            arr[k]=nr;
            arr[k+1]=nr*2;
            k+=2;
        }
    }
    for(int i=1;i<=k-1;i++)
        cout<<arr[i]<<" ";
}