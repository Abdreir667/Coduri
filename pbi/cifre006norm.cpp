#include <iostream>

using namespace std;

int main()
{
    int n,k,temp1,nrc=0,tab[1000],nr=0,nrcor=0,nrcora=0;
    int nrc1=0,tab2[1000];
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    temp1=n;
    while(temp1!=0)
    {
        nrc++;
        if(temp1%10==k)
            nrcor++;
        temp1=temp1/10;
    }
    cout<<nrcor<<endl;
    for(int i=nrc;i>=1;i--)
    {
        tab[i]=n%10;
        n=n/10;
    }
    for(int j=1;j<=nrc;j++)
        if(tab[j]==k)
            nr=nr*10+tab[j];
    for(int k=1;k<=nrc;k++)
        nr=nr*10+tab[k];
    cout<<nr<<endl;
    int temp2,temp3,nrcorb,p1;
    temp2=nr;
    temp3=nr;
    nrcorb=nrcor;
    while(temp2!=0)
    {
        nrc1++;
        if(temp2%10==k)
            nrcora++;
        temp2=temp2/10;
    }
    cout<<nrc1<<endl;
    cout<<nrcora<<endl;
    for(int o=nrc1;o>=1;o--)
    {
        tab2[o]=nr%10;
        nr /=10;
    }
    for(int i=nrcora-1;i<nrc1+1;i++)
    {
    
            if(tab2[i]!=k)    
            cout<<tab2[i];
    }
    for(int i=1;i<=nrc;i++)
        cout<<tab2[i];
    return 0;
}