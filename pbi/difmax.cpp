#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int arr[100000],a,min=0,n;
    ifstream f("difmax.in");
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>a;
        arr[i]=a;
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            {
                if(arr[i]-arr[j]>min)
                    min=arr[i]-arr[j];
            }
    cout<<min<<endl;
}