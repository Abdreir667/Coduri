#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,arr1[100],arr2[100],nr1,nr2,max=0,sn,tabf[100];
    ifstream f("sumaxxl.int");
    ofstream g("sumaxxl.out");
    f>>nr1;
    for(int i=1;i<=nr1;i++)
        f>>arr1[i];
    f>>nr2;
    for(int i=1;i<=nr2;i++)
        f>>arr2[i];
    if(nr1>nr2)
    {
        for(int i=nr2;i<=nr1+1;i++)
        {
            arr2[i]=0;
            max=nr1;
        }
        arr1[max+1]=0;
    }
    else 
    {
        for(int i=nr1;i<=nr2+1;i++)
        {
            arr1[i]=0;
            max=nr2;
        }
        arr2[max+1]=0;
    }
    sn=arr1[1]+arr2[1];
    if(sn>=10)
    {
        max++;
        tabf[1]=sn/10;
        tabf[2]=sn%10;
    }
    else {max=max;
    tabf[1]=sn;
    }
    sn=arr1[max]+arr2[max];
    if(sn<10)
    {
        tabf[max]=sn;
        tabf[max-1]=0;
    }
    else {
        tabf[max]=sn%10;
        tabf[max-1]=1;
    }
    for(int i=max-1;i>=2;i--)
    {
        sn=arr1[i]+arr2[i];
        if(sn<10)
        {
            tabf[i]=tabf[i]+sn;
            tabf[i-1]=0;
        }
        if(sn>=10)
        {
            tabf[i]=tabf[i]+sn%10;
            tabf[i-1]=1;
        }
    }
    for(int i=1;i<=max;i++)
        cout<<tabf[i];
}