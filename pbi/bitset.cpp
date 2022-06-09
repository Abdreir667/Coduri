#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
    bitset<1> a[101];
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;i++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}