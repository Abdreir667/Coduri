#include <stdio.h>
#include <vector>

using namespace std;

int n,m,s,d,x;

int main(void)
{
    scanf("%d %d",&n,&m);
    vector<int> arr(n+1,0);
    vector<int> diff(n+2);
    for(int i=1;i<=m;i++)
    {
        scanf("%d %d %d",&s,&d,&x);
        diff[s]+=x;
        diff[d+1]-=x;
    }
    for(int i=1;i<=n;i++)
    {
        diff[i]+=diff[i-1];
        arr[i]+=diff[i];
        printf("%d ",arr[i]);
    }
}