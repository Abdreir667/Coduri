#include <iostream>

using namespace std;
long long x[100001], y[100001], reun[200001], inter[200001];
int main()
{
    int re=0, in=0, i, j, n, m, aux;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>x[i];
    cin>>m;
    for(i=1; i<=m; i++)
        cin>>y[i];
    
    i=1;
    j=1;
    while(i<=n&&j<=m)
        if(x[i]==y[j])
        {
            reun[++re]=x[i];
            inter[++in]=x[i];
            i++;
            j++;
        }
        else
            if(x[i]<y[j])
                reun[++re]=x[i++];
            else
                reun[++re]=y[j++];
    if(i<=n)
        for(; i<=n; i++)
            reun[++re]=x[i];
    if(j<=m)
        for(; j<=m; j++)
            reun[++re]=y[i]; 
    for(i=1; i<=re; i++)
        cout<<reun[i]<<" ";
    cout<<endl;
    for(i=1; i<=in; i++)
        cout<<inter[i]<<" ";
    
    return 0;
}