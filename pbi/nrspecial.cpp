#include <iostream>

using namespace std;

int main()
{
    int n,kn;
    bool conditie=false;
    cout<<"n=";cin>>n;
    kn=n*n;
    int j=1,nre,s=0,tab[1000];
    while(conditie==false)
    {
    s=0;
    nre=1;
    for(int i=j;i<=kn/2;i++)
    {
        
        tab[j+nre]=i;
        s=s+i;
        nre++;
        if(nre>n)
        break;

    }
    if(s==kn)
    {
        conditie=true;
        cout<<"Numarul este special"<<endl;;
        for(int k=j+1;k<=j+n;k++)
            cout<<tab[k]<<endl;
    }
    else if(j>kn/2)
    break;
    j++;
    }

    return 0;
}