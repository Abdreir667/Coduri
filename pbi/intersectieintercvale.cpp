#include <fstream>

using namespace std;

ifstream cin("intersectie.in");
ofstream cout("intersectie.out");

int binarysearch(int arr[],int st,int dr,int nr)
{
    int p=0;
    while(st<=dr)
    {
        int m=(st+dr)/2;
        if(arr[m]<=nr)
        {
            p=m;
            st=m+1;
        }
        else dr=m-1;
    }
    return p;
}

int inervale[100001],interogari[100001],n,m,t;

int main(void)
{
    cin>>n>>m>>t;
    for(int i=1;i<=n;i++)
    {
        
    }
}