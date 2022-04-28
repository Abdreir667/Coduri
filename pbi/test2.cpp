#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,nr,tab[100],nrc;
    bool conditie=false;
    ifstream f("date.int");
    ofstream g("date.out");
    f>>n;
    for(int i=0;i<=n-1;i++)
    {
        f>>nr;
        nrc=0;
        int temp1;
        temp1=nr;
        while(temp1!=0)
        {
            temp1=temp1/10;
            nrc++;
        }
        for(int j=nrc;j>=1;j--)
        {
            tab[j]=nr%10;
            nr=nr/10;
        }
        for(int j=1;j<nrc;j++)
            for(int k=j+1;k<=nrc;k++)
                if(tab[j]==tab[k])
                conditie=true;
        cout<<endl;
        if(conditie==true)
            break;
    }
    if(conditie==true)
        cout<<"NU";
    else 
        cout<<"DA";
}