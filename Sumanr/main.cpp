#include <iostream>

using namespace std;

int main()
{
    int n,m,suma=0,produs=1,x;
    cout<<"n=",cin>>n;
    for(int i=1;i<=n;i++)
        cout<<"i="<<i<<" ";
        cin>>x;
        if(x%3==0||x%5==0)
            suma+=x,produs*=x;
        cout<<"suma="<<suma<<" ";
        cout<<"produs="<<produs;


    return 0;
}
