#include <iostream>

using namespace std;

int main()
{
    int n, a[503][503], i, j, s1=0, s=0,maxi=0,mini=2147483647;
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            cin>>a[i][j];
            maxi=max(maxi,a[i][j]);
            mini=min(mini,a[i][j]);
        }
    if(maxi>n*n || mini>0)
    {
        cout<<"false";
        return 0;
    }
    s1=0;
    for(i=1; i<=n; i++)
        s1=s1+a[i][i];
    for(i=1; i<=n; i++)
    {
        s=0;
        for(j=1; j<=n; j++)
            s=s+a[i][j];
        if(s!=s1)
        {
            cout<<"false";
            return 0;
        }
    }
    for(j=1; j<=n; j++)
    {
        s=0;
        for(i=1; i<=n; i++)
            s=s+a[i][j];
        if(s!=s1)
        {
            cout<<"false";
            return 0;
        }
    }
    if(s!=s1)
    {
        cout<<"false";
        return 0;
    }
    s=0;
    i=1;
    j=n;
    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
        	if(i+j==n+1)
        		s+=a[i][j];
    if(s!=s1)
    {
        cout<<"false";
        return 0;
    }
    else cout<<"true";
    return 0;
}