#include <fstream>
#include <vector>

using namespace std;

ifstream cin("memory001.in");
ofstream cout("memory001.out");

int linii,coloane,nr,afisat;
long long mini=922337203685775807;


int main(void)
{
    cin>>linii>>coloane;
    vector<long long> sume(coloane,0);
    for(int i=0;i<linii;i++)
        for(int j=0;j<coloane;j++)
        {
            cin>>nr;
            sume[j%coloane]+=nr;
        }
    for(int i=sume.size()-1;i>=0;i--)
    {
        if(sume[i]<=mini)
        {
            mini=sume[i];
            afisat=i+1;
        }
    }
    cout<<afisat<<endl;

}