#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("date.int");
    ofstream g("date.out");
    int n,nri=0,nrt=0,temp=1,tab[10000],temp1;
    while(f>>n)
    {
        if(n%2==1)
            nri++;
    }
    cout<<nri<<endl;
    f.clear();
    f.seekg(0,ios::beg);
    while(f>>n)
    {
        if(n%2==1)
            nri--;
        if(n%2==0 && nri==3)
        {
            tab[temp]=n;
            temp++;
        }
    }
    if(temp>0)
    {
    for(int i=1;i<temp;i++)
        for(int j=i+1;j<=temp;j++)
    {
        if(tab[i]<tab[j])
        {
            temp1=tab[i];
            tab[i]=tab[j];
            tab[j]=temp1;
        }
    }
    for(int i=1;i<=2;i++)
        cout<<tab[i]<<endl;
    }
    else
        cout<<"Nu exista";

}






















/*#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("date.int");
    ofstream g("date.out");
    int n,nrc,tab1[100000],temp1,temp=1;
    while(f>>n)
    {
        temp1=n;
        if(n%2==0)
        {
            f>>n;
            nrc=1;
            if(n%2!=0)
                while(n%2!=0)
                {
                   f>>n;
                   if(n%2!=0)
                   {
                   nrc++;
                   if(nrc==3)
                   {
                        break;
                        tab1[temp]=temp1;
                        temp++;
                   }
                   }
                   if(n%2==0)
                    break;
                }
            else
                break;
        }
    }
    for(int i=1;i<=temp;i++)
        cout<<tab1[i]<<endl;
}*/
