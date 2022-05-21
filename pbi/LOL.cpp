#include <fstream>

using namespace std;

ifstream cin("LOL.in");
ofstream cout("LOL.out");

int n;
char invingator,pierzator;

struct jucatori{
    int castig=0;
    int valoare=300;
    bool prezent=0;
}p[102];

int main(void)
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>invingator>>pierzator;
        p[int(invingator)].castig+=p[int(pierzator)].valoare;
        if(p[(int(invingator))].valoare<=950)
        p[int(invingator)].valoare+=50;
        if(p[int(pierzator)].valoare>=50)
            p[int(pierzator)].valoare-=50;
    }
    for(int i=1;i<=2;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(i==1)
                cout<<(char)('A'+j)<<" "<<p[int('A')+j].castig<<endl;
            if(i==2)
                cout<<(char)('a'+j)<<" "<<p[int('a')+j].castig<<endl;
        }
    }
}