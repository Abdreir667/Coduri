#include <fstream>

using namespace std;

ifstream cin("cautafibo.in");
ofstream cout("cautafibo.out");

long long fibo[1001];
long long nr,nre=0;

void generare_fibo()
{
    long long f;
    for(int i=1;i<=50;i++)
    {
        if(i<=2)
            f=1;
        else f=fibo[i-1]+fibo[i-2];
        fibo[i]=f;
    }
}

int binary_search(int val)
{
    int st=1,dr=50;
    while(st<dr)
    {
        int mij=(st+dr)/2;
        if(fibo[mij]==val)
            return mij;
        if(fibo[mij]<val)
            st=mij+1;
        else dr=mij;
    }
    return -1;
}



int main(void)
{
    generare_fibo();
    while(cin>>nr)
        if(binary_search(nr)!=-1)
            nre++;
    cout<<nre<<" ";
}
