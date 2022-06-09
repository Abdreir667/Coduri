#include <fstream>

using namespace std;

ifstream cin("frecvimp.in");
ofstream cout("frecvimp.out");

unsigned long long n,nr,s=0;

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nr;
        if((nr&(nr-1))==0)
            s=s^nr;
    }
    cout<<s<<endl;
}