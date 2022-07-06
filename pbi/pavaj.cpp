#include <fstream>

using namespace std;

ifstream cin("pavaj.in");
ofstream cout("pavaj.out");

int sum[1006][1006]={0};
bool val;
int i1,j1,i2,j2;
int linii,coloane;
int p;
long long lung,LUNG;

int main(void)
{
    cin>>linii>>coloane>>p; b
    for(int i=1;i<=linii;i++)
        for(int j=1;j<=coloane;j++)
        {
			cin>>val;
			sum[i][j]= sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1]+val;
		}
    for(int i=1;i<=p;i++)
    {
        cin>>i1>>j1>>i2>>j2;
        lung=i2-i1;
        LUNG=j2-j1;
        if((i1>i2 && j1<j2))
        {
            lung=i1-i2;
            LUNG=j2-j1;
            i1-=lung;
            i2+=lung;
        }
        else if(i1<i2 && j1>j2)
        {
            lung=j1-j2;
            LUNG=i2-i1;
            j1-=lung;
            j2+=lung;
        }
        else if(i1>i2 && j1>j2)
        {
            swap(i1,i2);
            swap(j1,j2);
            lung=i2-i1;
            LUNG=j2-j1;
        }
        lung++;
        LUNG++;
        int arie=lung*LUNG;
        if((sum[i2][j2] - sum[i1 - 1][j2] - sum[i2][j1 - 1] + sum[i1 - 1][j1 - 1])==0)
            cout<<0<<"\n";
        else if((sum[i2][j2] - sum[i1 - 1][j2] - sum[i2][j1 - 1] + sum[i1 - 1][j1 - 1])==arie)
            cout<<1<<"\n";
        else cout<<2<<"\n";
    }
}