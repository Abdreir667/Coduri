/// Se dau n numere întregi. Să se insereze între oricare două numere de aceeași paritate media lor aritmetică.

#include <iostream>

using namespace std;

int main()
{
    int x[1001], n, i, j;
    float m;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>x[i];
    for(i=n-1; i>=1; i--)
        if((x[i]+x[i-1])%2==0)
        {
            m=(x[i]+x[i+1])/2;
            for(j=n; j>=i+1; j--)
                x[j+1]=x[j];
            x[i+1]=m;
            n++;
            i++;
        }
    for(i=1; i<=n; i++)
        cout<<x[i]<<" ";
    return 0;
}