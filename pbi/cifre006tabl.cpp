#include <iostream>

using namespace std;

int main()
{
    int n,k,temp1,nrc=0,tab[1000],nr=0,nrk=0;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    temp1=n;
    while(temp1!=0)
    {
        nrc++;
        if(temp1%10==k)
            nrk++;
        temp1=temp1/10;
    }
    for(int i=nrc;i>=1;i--)
    {
        tab[i]=n%10;
        n=n/10;
    }
    for(int i=1;i<=nrk;i++)
    {
    for(int j=1;j<=nrc;j++)
    {
        if(tab[j]==k)
        {
        nr=nr*10+tab[j];
        for(int l=j;l<nrc;l++)
        {
            tab[l]=tab[l+1];
        }
        nrc--;
        }
    }
    for(int k=1;k<=nrc;k++)
        if(tab[k]!=k)
            nr=nr*10+tab[k];
    }
    cout<<nr<<endl;
}