#include <iostream>
#include <fstream> 
#include <algorithm>

using namespace std;

int main()
{
    ifstream f("ciffmin.int");
    int n,nr,arr[100];
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>nr;
        int temp,min;
        min=10;
        temp=nr;
        while(temp!=0)
        {
            if(temp%10<min)
                min=temp%10;
            temp/=10;
        }
        arr[i]=min;
    }
    sort(arr,arr+n+1);
    for(int i=1;i<=n;i++)
        cout<<arr[i];
}