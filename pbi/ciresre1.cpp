#include <iostream>

using namespace std;

int linii,coloane,p;
short nr;
short i1,j1,i2,j2;
long long sum[1001][1001]={0};
long long maxi=-1;

int main(void)
{
    cin>>linii>>coloane>>p;
    for(int i = 1; i <= linii; i++) {
		for(int j = 1; j <= coloane; j++) {
			cin>>sum[i][j];
			sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
		}
	}
    for(int i=1;i<=p;i++)
    {
        cin>>i1>>j1>>i2>>j2;
        maxi=max(maxi,sum[i2][j2] - sum[i1 - 1][j2] - sum[i2][j1 - 1] + sum[i1 - 1][j1 - 1]);
    }
    cout<<maxi<<" ";
}