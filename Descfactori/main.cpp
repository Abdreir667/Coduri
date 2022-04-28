#include <iostream>

using namespace std;

int main()
{
    int a,f,e,i,tab1[100],temp2=0,tab2[100],temp1,temp3;
    cout<<"a=";cin>>a;
    int aux;
    aux=a;
        for(i=2;i<=aux;i++)
        {
            e=0;
            if(aux%i==0)
                while(aux%i==0)
        {
            e++;
            aux=aux/i;
        }
        if(e>0)
        {
            tab1[temp2]=e;
            tab2[temp2]=i;
        temp2++;
        }
        }
        
    for(int i=0;i<temp2;i++)
        for(int j=i+1;j<=temp2;j++)
        {
            if(tab2[i]>tab2[j])
            {
                temp1=tab2[i];
                temp3=tab1[i];
                tab2[i]=tab2[j];
                tab1[i]=tab1[j];
                tab2[j]=temp1;
                tab1[j]=temp3;
            }
        }
        cout<<tab2[1];
    return 0;
}
