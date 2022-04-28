#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std; 

int main()
{
    int n,nr;
    ifstream f("cod3.in");
    ofstream g("cod3.out");
    f>>n;
    bool cond=false;
    int arr[100000],o=1,carr[10000],p=1;
    f>>arr[1];
    carr[1]=arr[1];
    for(int i=2;i<=n;i++)
    {
        f>>nr;
        carr[++p]=nr;
        cond=false;
        for(int j=1;j<=o;j++) 
            if(nr==arr[j])
                cond=true;
        if(cond==false)
            arr[++o]=nr;
    }
    int barr[100000]={0};
    for(int i=1;i<=o;i++)
        for(int j=1;j<=p;j++)
            if(arr[i]==carr[j])
                barr[i]++;
    p=0;
    for(int i=1;i<=o;i++)
        if(barr[i]%2==1)
            carr[++p]=arr[i];
    sort(carr+1,carr+p+1);
    for(int i=1;i<=p;i++)
        g<<carr[i];
    f.close();
    g.close();
    return 0;
}