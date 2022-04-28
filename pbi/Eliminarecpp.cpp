#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,nr,k;
    ifstream f("eliminare.in");
    f>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        arr[i]=nr;
    }
    cout<<"k=";cin>>k;
    for(int i=k;i<=n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<endl;
    f.close();
    return 0;
}