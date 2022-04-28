#include <iostream>

using namespace std;

int main()
{
    int n,m,nre=0,p=1,p1=1,nre1;
    cin>>n>>m; //unde n este putere a lui 10 si m un numar oarecare
    while(nre!=n)
    {
        p=p*10;
        nre++;
    }
    nre1=0;
    while(nre1=m)
    {
        p1=p1*p;
        nre1++;
    }
    cout<<"Rezultatul final este "<<p1;
    return 0;
}
