#include <fstream>

using namespace std; 

ifstream cin("maraton.in");
ofstream cout("maraton.out");

int distanta[100001],viteza[100001];

int binary_search(int arr[],int st,int dr,int dist_sosire,int viteza,int timp)
{
    int p=0;
    while(st<dr)
    {
        int m=(st+dr)/2;
        if(viteza*timp>=dist_sosire)
        {
            p=m;
            st=m+1;
        }
        else dr=m-1;
    }
    cout<<p<<endl;
    return 0;
}

int main()
{
    int n,timp;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>distanta[i]>>viteza[i];
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>timp;
        binary_search(distanta,1,n,)
    }

}