#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    long long x[101], n, sum[101], dim=0, i, j;
    ifstream f("ordsume.in");
    ofstream g("ordsume.out");
    f>>n;
    for(i=1; i<=n; i++)
        f>>x[i];
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
        	if(x[i]!=x[j])
            sum[++dim]=x[i]+x[j];
    sort(sum+1, sum+dim+1);
    for(i=1; i<=dim; i++)
    {
        g<<sum[i]<<" ";
        for(j=i+1; j<=dim; j++)
            if(sum[i]==sum[j])
                i++;
    }

    return 0;
}