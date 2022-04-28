#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("halfsort2.in");
ofstream cout("halfsort2.out");

int pare[101],impare[101],n,temp1=0,temp2=0,nr;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if(i%2==0)
            pare[++temp1]=nr;
        else impare[++temp2]=nr;
    } 
    sort(pare+1,pare+temp1+1);
    sort(impare+1,impare+temp2+1,greater<int>());
    temp1=0,temp2=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            cout<<pare[++temp1]<<" ";
        else cout<<impare[++temp2]<<" ";
    }
}