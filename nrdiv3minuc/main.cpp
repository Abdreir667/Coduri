#include <iostream>

using namespace std;

int main()
{
    int n,aux,k=0,k1=1,imp=1,k2=0,s;
    cout<<"n=";cin>>n;
    aux=n;
    while(aux!=0)
    {
        aux=aux/10;
        k++;
    }
    while(k1!=k && k2!=k-1)
    {
        imp=imp*10;
        k1++;
        s=((n/imp)+(n%(imp/10)));
        k2++;
        cout<<s<<endl;


    }




    return 0;
}
