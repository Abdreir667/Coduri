#include <fstream>
#include <vector>

using namespace std;

ifstream cin("nrdiv9.in");
ofstream cout("nrdiv9.out");

int nr;
int nre=0;

int main(void)
{
    cin>>nr;
    vector<short> v(nr,0);
    for(int i=1;i<=nr;i++)
            for(int j=1;j<=nr/i;j++)
                v[i*j]++;
    for(int i=1;i<=nr;i++)
        if(v[i]==9)
            nre++;
    cout<<nre<<endl;
}